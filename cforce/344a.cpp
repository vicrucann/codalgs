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
    scanf("%d\n", &n);
    int cnt=1;
    int p=0;
    for (int i=0;i<n;++i){
        int m;
        scanf("%d", &m);
        if (i){
            if (p!=m)
                cnt++;
        }
        p=m;
    }
    printf("%d\n", cnt);
    return 0;
}
