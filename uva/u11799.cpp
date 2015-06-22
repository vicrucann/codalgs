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
    int T;
    scanf("%d", &T);
    int cs=1;
    while (T--){
        int N;
        scanf("%d", &N);
        int mx=0;
        for (int i=0;i<N;++i){
            int x;
            scanf("%d", &x);
            mx = max(x,mx);
        }
        printf("Case %d: %d\n", cs,mx);
        cs++;
    }
    return 0;
}
