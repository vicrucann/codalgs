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
    int a1,a2,a3;
    int b1,b2,b3;
    cin>>a1>>a2>>a3;
    cin>>b1>>b2>>b3;
    int n;
    cin>>n;
    n-=(a1+a2+a3)/5;
    (a1+a2+a3)%5>0? n--: n=n;
    n-=(b1+b2+b3)/10;
    (b1+b2+b3)%10>0? n--: n=n;
    if (n>=0)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
