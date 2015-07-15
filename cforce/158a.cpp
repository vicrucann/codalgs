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
    int n,k;
    scanf("%d %d", &n, &k);
    int a[n];
    for (int i=0; i<n; ++i)
        scanf("%d", &a[i]);
    int j=0;
    while (a[k-1]<=a[j] && a[j] && j<n)
        j++;
    printf("%d\n", j);
    return 0;
}
