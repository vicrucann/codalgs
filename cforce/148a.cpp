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
    int k,l,m,n,d;
    cin >> k;
    cin >> l;
    cin >> m;
    cin >> n;
    cin >> d;
    int cnt=0;
    for (int i=1;i<=d;++i){
        if (i%k!=0 && i%l!=0 && i%m!=0 && i%n!=0)
            cnt++;
    }
    printf("%d\n", d-cnt);
    return 0;
}
