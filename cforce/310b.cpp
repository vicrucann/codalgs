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
    int a[n];
    for (int i=0;i<n;++i)
        scanf("%d", &a[i]);
    int d = n - (a[0] % n);
    if (d==n)
        d=0;
    int res=1;
    for (int i=1;i<n;++i){
        int idx = i%2==0? (n+a[i]+d)%n : (n+a[i]-d)%n;
        if (idx != i){
            res=0;
            break;
        }
    }
    if (res)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}
