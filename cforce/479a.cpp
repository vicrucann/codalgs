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
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    int mx=0;
    mx=max(mx, a+b+c);
    mx=max(mx, a*b*c);
    mx=max(mx, a+b*c);
    mx=max(mx, a*b+c);
    mx=max(mx, a*(b+c));
    mx=max(mx, (a+b)*c);
    printf("%d\n", mx);
    return 0;
}
