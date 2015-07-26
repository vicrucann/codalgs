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
    int a,b;
    scanf("%d %d", &a, &b);
    int cnt=0;
    cnt+=a;
    while (a>=b){
        cnt+=a/b;
        a=a/b+a%b;
    }
    printf("%d\n",cnt);
    return 0;
}
