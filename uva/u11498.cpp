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
    int K;
    scanf("%d", &K);
    while(K!=0){
        int N,M;
        scanf("%d %d", &N, &M);
        while (K--){
            int x,y;
            scanf("%d %d", &x, &y);
            if (x<N && y>M) printf("NO\n");
            else if (x>N && y>M) printf("NE\n");
            else if (x>N && y<M) printf("SE\n");
            else if (x<N && y<M) printf("SO\n");
            else printf("divisa\n");
            }
        scanf("%d", &K);
    }
    return 0;
}
