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
    scanf("%d", &n);
    int m=1;
    int i=1;
    int tot=m;
    while(tot<=n){
        i++;
        m=m+i;
        tot+=m;
    }
    printf("%d\n", i-1);
    return 0;
}
