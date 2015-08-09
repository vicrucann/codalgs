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
#include <queue>
#include <set>

using namespace std;

int main(){
    string lin;
    int w1=0,w2=0;
    for (int j=0; j<8;++j){
        getline(cin, lin);
        for (unsigned int i=0;i<lin.size();++i){
            if (lin[i]=='Q')      w1+=9;
            else if (lin[i]=='q') w2+=9;
            else if (lin[i]=='R') w1+=5;
            else if (lin[i]=='r') w2+=5;
            else if (lin[i]=='B') w1+=3;
            else if (lin[i]=='b') w2+=3;
            else if (lin[i]=='N') w1+=3;
            else if (lin[i]=='n') w2+=3;
            else if (lin[i]=='P') w1+=1;
            else if (lin[i]=='p') w2+=1;
        }
    }
    if (w1==w2)
        printf("Draw\n");
    else if (w1>w2)
        printf("White\n");
    else
        printf("Black\n");
    return 0;
}
