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
    scanf("%d", &n);
    int sumx=0,sumy=0,sumz=0;
    while(n--){
        int x,y,z;
        scanf("%d %d %d", &x, &y, &z);
        sumx+=x;
        sumy+=y;
        sumz+=z;
    }
    if (!sumx && !sumy && !sumz)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
