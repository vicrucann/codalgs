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
    cin >> n;
    int a[n];
    for (int i=0;i<n;++i)
        cin >> a[i];
    sort(a,a+n);
    int res=-1;
    res=a[0]==1? -1 : 1;
    printf("%d\n", res);
    return 0;
}
