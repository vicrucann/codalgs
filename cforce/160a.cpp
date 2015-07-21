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
    int sum=0;
    for (int i=0;i<n;++i){
        cin >> a[i];
        sum += a[i];
    }
    sort(a,a+n);
    int mon=0;
    int idx = n-1;
    while (mon <= sum-mon && idx >=0){
        mon += a[idx];
        idx--;
    }
    printf("%d\n", n-idx-1);
    return 0;
}
