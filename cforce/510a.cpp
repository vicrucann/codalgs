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
    int n,m;
    scanf("%d %d", &n, &m);
    for (int i=1;i<=n;++i){
        if (i%2){
            for (int j=0;j<m;++j)
                printf("#");
        }
        else{
            if (i%4)
                printf(".");
            else
                printf("#");
            for (int j=1;j<m-1;++j)
                printf(".");
            if (i%4)
                printf("#");
            else
                printf(".");
        }
        printf("\n");
    }
    return 0;
}
