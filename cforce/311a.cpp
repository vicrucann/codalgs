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

using namespace std;

int main(){
    cerr << "311a" << endl;
    int n;
    scanf("%d", &n);
    int mn1,mx1,mn2,mx2,mn3,mx3;
    scanf("%d %d", &mn1,&mx1);
    scanf("%d %d", &mn2, &mx2);
    scanf("%d %d", &mn3, &mx3);
    int r1=mn1;
    int r2=mn2;
    int r3=mn3;
    while (r1+r2+r3<n){
        if (r1 < mx1)
            r1++;
        else if (r2 < mx2)
            r2++;
        else
            r3++;
    }
    printf("%d %d %d\n", r1, r2, r3);
    return 0;
}
