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
    cin>>n;
    int a[n];
    for (int i=0;i<n;++i){
        int ai;
        cin>>ai;
        a[i]=ai;
    }
    sort(a,a+n);
    for (int i=0;i<n;++i){
        if (i<n-1)
            printf("%d ", a[i]);
        else
            printf("%d\n", a[i]);
    }
    return 0;
}
