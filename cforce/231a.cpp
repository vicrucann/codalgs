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
    cin >> n;
    int cnt=0;
    for (int i=0;i<n;++i){
        int a,b,c;
        cin >> a >> b >> c;
        cnt+=(a+b+c>=2)? 1 : 0;
    }
    printf("%d\n", cnt);
    return 0;
}
