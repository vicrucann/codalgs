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
    return b==0? a : gcd(b,a%b);
}

int main(){
    cerr << "318c" << endl;
    int n;
    cin>>n;
    int a[n];
    cin>>a[0];
    int del=a[0];
    for (int i=1;i<n;++i){
        cin>>a[i];
        del=gcd(max(del,a[i]), min(del,a[i]));
    }
    int sum=0;
    for (int i=0;i<n;++i){
        int ai = a[i]/del;
        while (ai%3==0)
            ai/=3;
        while (ai%2==0)
            ai/=2;
        if (ai==1)
            sum++;
    }
    if (sum==n)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
