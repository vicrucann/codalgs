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
    long long int a,b;
    cin>>a>>b;
    double x=1000000000.0;
    if (a<b)
        x=-1;
    else{
        long long int K1=(a-b)/b;
        if (K1%2!=0)
            K1--;
        long long int K2=(a+b)/b;
        if (K2%2!=0)
            K2--;
        if (a==b)
            x=a;
        else{
            x=min(x,double(a-b)/double(K1));
            x=min(x, double(a+b)/double(K2));}
    }
    printf("%.9f\n", x);
    return 0;
}
