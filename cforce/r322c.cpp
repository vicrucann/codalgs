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

bool cmp(const int& a, const int& b){
    return 10-a%10 < 10-b%10; 
}

int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for (int i=0;i<n;++i)
        cin>>a[i];
    sort(a,a+n, cmp);
    for (int i=0;i<n;++i){
        int diff=10-a[i]%10;
        if (diff<=k && a[i]<100){
            k-=diff;
            a[i]+=diff;
        }
        else break;
    }
    int sc=0;
    for (int i=0;i<n;++i){
        if (a[i]<100){
            if (100-a[i]>k){
                a[i]+=k;
                k=0;
            }
            else{
                k=k-(100-a[i]);
                a[i]=100;
            }
        }
        sc+=a[i]/10;
    }
    printf("%d\n", sc);
    return 0;
}
