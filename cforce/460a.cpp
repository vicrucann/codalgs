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
    int m,n;
    cin >> n >> m;
    int cnt=0;
    int days=1;
    while (n>0){
        cnt++;
        n--;
        if (days%m==0)
            n++;
        days++;
    }
    printf("%d\n",cnt);
    return 0;
}
