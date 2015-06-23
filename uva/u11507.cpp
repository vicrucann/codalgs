#include <cstring>
#include <vector>
#include <list>
#include <algorithm>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cassert>
#include <string>

using namespace std;

int main(){
    int L=1;
    scanf("%d", &L);
    while (L!=0){
        int r=1;
        for (int j=0; j< L-1; ++j){
            string d;
            //scanf("%s", &d);
            cin >> d;
            if (d == "No")
                continue;
            if (abs(r)==1){
                if (d=="+y") r*=2;
                else if (d=="-y") r*=-2;
                else if (d=="+z") r*=3;
                else r*=-3;
            }
            else if (abs(r)==2){
                if (d=="+y") r=(-1*r)/abs(r);
                else if (d=="-y") r=r/abs(r);
            }
            else{
                if (d=="+z") r=(-1*r)/abs(r);
                else if (d=="-z") r=r/abs(r);
            }
        }
        if (r==1) printf("+x\n");
        else if (r==-1) printf("-x\n");
        else if (r==2) printf("+y\n");
        else if (r==-2) printf("-y\n");
        else if (r==3) printf("+z\n");
        else printf("-z\n");
        scanf("%d", &L);
    }

    return 0;
}
