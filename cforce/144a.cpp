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
    int pmx=0,pmn=0;
    int mx=0, mn=101;
    for (int i=0;i<n;++i){
        int ai;
        scanf("%d", &ai);
        if (ai>mx){
            pmx=i;
            mx=ai;
        }
        if (ai<=mn){
            pmn=i;
            mn=ai;
        }
    }
    int res=0;
    res+=n-pmn-1;
    res+=(pmx);
    if (pmn<pmx)
        res--;
    printf("%d\n", res);
    return 0;
}
