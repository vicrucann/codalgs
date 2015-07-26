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
    int n,m;
    scanf("%d %d", &n, &m);
    int cnt=0;
    while (m*n>0){
        m--;
        n--;
        cnt++;
    }

    if (cnt%2==0)
        printf("Malvika\n");
    else
        printf("Akshat\n");
    return 0;
}
