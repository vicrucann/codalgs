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
    int cnt=1;
    int mx=0;
    int h0,m0;
    for (int i=0;i<n;++i){
        int h,m;
        cin>>h>>m;
        if (i){
            if (h==h0 && m==m0)
                cnt++;
            else{
                cnt=1;
            }
        }
        h0=h;
        m0=m;
        mx=max(mx,cnt);
    }
    printf("%d\n", mx);
    return 0;
}
