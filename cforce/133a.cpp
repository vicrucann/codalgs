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
    char str[101];
    scanf("%s", str);
    bool res=false;
    for (int i=0;i<101;++i){
        if (str[i]==0)
            break;
        if (str[i]=='H' || str[i]=='Q' || str[i]=='9' ){
            res=true;
            break;
        }
    }
    if (res)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
