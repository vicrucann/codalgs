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
    int N,B,H,W;
    while (scanf("%d %d %d %d", &N, &B, &H, &W) != EOF){
        int mc=B+1;
        for (int i=0;i<H;++i){
            int ptot=0;
            int p,a;
            scanf("%d", &p);
            for (int j=0;j<W;++j){
                scanf("%d", &a);
                if (a<N)
                    ptot=B+1;
                else
                    ptot=p*N;
                mc=min(ptot,mc);
            }
        }
        if (mc<=B)
            printf("%d\n", mc);
        else
            printf("stay home\n");
    }
    return 0;
}
