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
    int res=0;
    for (int i=1;i<=5;++i){
        for (int j=1;j<=5;++j){
            int a;
            cin >> a;
            if (a){
                res = abs(i-3)+abs(j-3);
                break;
            }
        }
    }
    printf("%d\n", res);
    return 0;
}
