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
    int t=0;
    int isp=0;
    int is=5*pow(2,t);
    while (is < n){
        t++;
        isp=is;
        is += 5*pow(2,t);
    }
    int res = ceil(double(n-isp)/double(pow(2,t)));
    if (res==1)
        printf("Sheldon\n");
    else if (res==2)
        printf("Leonard\n");
    else if (res==3)
        printf("Penny\n");
    else if (res==4)
        printf("Rajesh\n");
    else
        printf("Howard\n");
    return 0;
}
