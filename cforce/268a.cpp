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
    int h[n], a[n];
    for (int i=0;i<n;++i){
        scanf("%d %d", &h[i], &a[i]);
    }
    int cnt=0;
    for (int i=0;i<n;++i){
        for (int j=0;j<n;++j){
            if (i==j)
                continue;
            if (h[i]==a[j])
                cnt++;
        }
    }
    printf("%d\n", cnt);
    return 0;
}
