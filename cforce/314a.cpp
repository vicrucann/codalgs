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
    int x[n];
    for (int i=0;i<n;++i){
        cin>>x[i];
    }
    for (int i=0;i<n;++i){
        int mn, mx;
        if (i==0){
            mn = x[i+1]-x[i];
            mx = x[n-1]-x[i];
        }
        else if (i==n-1){
            mn=x[i]-x[i-1];
            mx=x[i]-x[0];
        }
        else{
            mn = min(x[i]-x[i-1], x[i+1]-x[i]);
            mx = max(x[i]-x[0], x[n-1]-x[i]);
        }
        printf("%d %d\n", mn, mx);
    }
    return 0;
}
