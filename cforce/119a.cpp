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

int gcd(int a, int b){
    return b==0? a : gcd(b, a%b);
}

int main(){
    int a,b,n;
    cin>>a>>b>>n;
    int i=0;
    while (n>0){
        int q;
        if (!i){
            if (n>a)
                q=gcd(n,a);
            else
                q = gcd(a,n);
        }
        else{
            if (n>b)
                q=gcd(n,b);
            else
                q=gcd(b,n);
        }
        if (n<q)
            break;
        i=!i;
        n-=q;
    }
    if (i)
        printf("0\n");
    else
        printf("1\n");
    return 0;
}
