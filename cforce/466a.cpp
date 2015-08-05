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
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int res=0;
    res=n*a;
    res=min(res, n/m*b + min(a*(n%m), b));
    cout<<res<<endl;
    return 0;
}
