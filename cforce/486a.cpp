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
    cin >> n;
    long long int res=1;
    if (n%2!=0)
        res=n/2-n;
    else
        res=n/2;
    cout << res << endl;
    return 0;
}
