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
    int s[4];
    scanf("%d %d %d %d", &s[0], &s[1], &s[2], &s[3]);
    sort(s,s+4);
    int cnt=0;
    for (int i=1;i<4;++i){
        if (s[i]==s[i-1])
            cnt++;
    }
    printf("%d\n",cnt);
    return 0;
}
