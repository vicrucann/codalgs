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
    long long int n,k;
    cin >> n >> k;
    long long int m = ceil(n*0.5);
    long long int res=0;
    if (k>m){
        res = 2*(k-m);
    }
    else {
        res = k*2-1;
    }
    cout << res << endl;
    return 0;
}
