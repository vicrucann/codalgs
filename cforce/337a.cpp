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
    int f[m];
    for (int i=0;i<m;++i){
        scanf("%d", &f[i]);
    }
    sort(f,f+m);
    int diff=10000;
    for (int i=0;i<m-n+1;++i){
        diff = diff>f[i+n-1]-f[i]? f[i+n-1]-f[i] : diff;
    }
    printf("%d\n", diff);
    return 0;
}
