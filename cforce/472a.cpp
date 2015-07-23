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
    int x;
    if (n%2==0)
        x=4;

    else
        x=9;
    printf("%d %d\n", x,n-x);

    return 0;
}
