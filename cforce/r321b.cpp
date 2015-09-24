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
    int n,d;
    cin>>n>>d;
    pair<int, int> dat[n];
    for (int i=0;i<n;++i){
        scanf("%d %d", &dat[i].first, &dat[i].second);
    }
    sort(dat, dat+n);
    long long int sum=0;
    long long int mx=0;
    int i=0,j=0;
    for (;i<n;++i){
        while (j<n && abs(dat[i].first-dat[j].first)<d){
            sum+=dat[j].second;
            ++j;
        }
        mx=max(mx, sum);
        sum-=dat[i].second;
    }
    cout << mx << endl;
    return 0;
}
