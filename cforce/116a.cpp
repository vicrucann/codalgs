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
    int n;
    scanf("%d", &n);
    int res=0;
    int pas=0;
    for (int i=0;i<n;++i){
        int ai, bi;
        scanf("%d %d", &ai, &bi);
        if (!i)
            pas=bi;
        else if (i<n-1){
            pas-=ai;
            pas+=bi;
        }
        res = max(res, pas);
    }
    printf("%d\n",res);
    return 0;
}
