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
    char str[51];
    scanf("%s", str);
    int cnt=0;
    for (int i=1;i<n;++i){
        if (str[i]==0)
            break;
        if (str[i]==str[i-1])
            cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}
