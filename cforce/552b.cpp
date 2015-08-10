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
    long long int n;
    cin>>n;
    int cnt=1;
    long long int mx=9;
    long long int sum=9;
    long long int p10=10;
    while (mx<n){
        cnt++;
        long long int prev_mx=mx;
        p10*=10;
        mx = p10-1;
        sum+=(mx-prev_mx)*cnt;
    }
    cout << sum-cnt*(mx-n) << endl;
    return 0;
}
