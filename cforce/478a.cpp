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
    int c[5];
    scanf("%d %d %d %d %d", &c[1], &c[2], &c[3], &c[4], &c[5]);
    int sum=c[1]+c[2]+c[3]+c[4]+c[5];
    int r=sum%5;
    (r==0&&sum>0)? printf("%d\n", sum/5) : printf("-1\n");
    return 0;
}
