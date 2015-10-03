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
    for (int i=0;i<n;++i)
        cin>>a[i];
    int dir=1;
    int cnt=0;
    vector<int> lock(n);
    int res=0;
    for (int i=0;i<n;++i){
        for (int j=0;j<n;++j){
            int id=j;
            if (dir==-1)
                id=n-1-j;
            if (cnt>=a[id] && !lock[id]){
                cnt++;
                lock[id]=1; }
        }
        if (cnt>=n)
            break;
        dir=-dir;
        res++;
    }
    printf("%d\n", res);
    return 0;
}
