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
    int na,nb;
    cin>>na>>nb;
    int k,m;
    cin>>k>>m;
    int a[na],b[nb];
    for (int i=0;i<na;++i){
        cin>>a[i];
    }
    for (int i=0;i<nb;++i){
        cin>>b[i];
    }
    int ax = a[k-1];
    int bx = b[nb-m];
    if (ax<bx)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
