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
    int n,t;
    scanf("%d %d", &n, &t);
    int a[n-1];
    for (int i=0;i<n-1;++i){
        scanf("%d", &a[i]);
    }
    int pos=1;
    while (pos-1<=n-1){
        if (pos>=t)
            break;
        pos+=a[pos-1];
    }
    if (pos==t)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
