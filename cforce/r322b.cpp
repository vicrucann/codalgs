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
    int h[n];
    for (int i=0;i<n;++i){
        cin>>h[i];
    }
    int a[n];
    int mx=0;
    for (int i=n-1;i>=0;--i){
        if (h[i]<=mx)
            a[i]=mx-h[i]+1;
        else
            a[i]=0;
        mx=max(mx,h[i]);
    }
    for (int i=0;i<n;++i){
        if (i)
            printf(" ");
        printf("%d", a[i]);
    }
    printf("\n");
    return 0;
}
