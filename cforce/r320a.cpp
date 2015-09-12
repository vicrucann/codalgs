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
    int n,x;
    cin>>n>>x;
    int cnt=0;
    if (x<=n)
        cnt++;
    for (int i=2;i<=n;++i){
        if (x%i==0 && x/i<=n)
            cnt++;

    }
    printf("%d\n", cnt);
    return 0;
}
