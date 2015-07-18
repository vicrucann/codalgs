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
    char s[101];
    scanf("%s", s);
    int cnt=1;
    for (int i=1;i<101;++i){
        if (s[i]==0)
            break;
        cnt = s[i]==s[i-1]? cnt+1 : 1;
        if (cnt>=7)
            break;
    }
    cnt>=7? printf("YES\n") : printf("NO\n");
    return 0;
}
