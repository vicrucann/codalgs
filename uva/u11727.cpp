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

using namespace std;

int main(){
    int T;
    int c=1;
    scanf("%d", &T);
    while(T--){
        int s[3];
        scanf("%d %d %d", &s[0], &s[1], &s[2]);
        sort(s, s+3);
        printf("Case %d: %d\n", c, s[1]);
        c++;
    }
    return 0;
}
