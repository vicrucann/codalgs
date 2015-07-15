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
    char s[100];
    scanf("%s", s);
    int len=0;
    for (int i=0;i<100;++i){
        len=i;
        if (s[i]==0)
            break;
    }
    int res=25*len+26;
    printf("%d\n", res);
    return 0;
}
