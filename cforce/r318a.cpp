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
    cerr << "318a" << endl;
    int n;
    cin>>n;
    int a[n-1];
    int lim=0;
    for (int i=0;i<n;++i){
        if (!i)
            cin>>lim;
        else 
            cin>>a[i-1];
    }
    sort(a,a+n-1);
    int del=0;
    while (lim+del<=a[n-2]){
        del++;
        a[n-2]--;
        int idx=n-3;
        while(a[n-2]+1 == a[idx] && idx>=0 && lim+del<=a[idx] ){
            del++;
            a[idx]--;
            idx--;
        }
    }
    printf("%d", del);
    return 0;
}
