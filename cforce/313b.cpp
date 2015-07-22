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
    int a1,b1;
    cin >> a1 >> b1;
    int a2,b2,a3,b3;
    cin >> a2 >> b2;
    cin >> a3 >> b3;
    int res=0;
    if (a1>=a2 && a1>=a3 && b1>=b2+b3)
        res=1;
    if (a1>=a2 && a1>=b3 && b1>=b2+a3)
        res=1;
    if (a1>=b2 && a1>=a3 && b1>=a2+b3)
        res=1;
    if (a1>=b2 && a1>=b3 && b1>=a2+a3)
        res=1;
    if (a1>=a2+a3 && b1>=b2 && b1>=b3)
        res=1;
    if (a1>=a2+b3 && b1>=b2 && b1>=a3)
        res=1;
    if (a1>=b2+a3 && b1>=a2 && b1>=b3)
        res=1;
    if (a1>=b2+b3 && b1>=a2 && b1>=a3)
        res=1;
    if (res)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
