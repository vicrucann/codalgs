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
    char sc[101];
    scanf("%s", s);
    bool first=false;
    int cnt=0;
    int len=0;
    for (int i=0;i<101;++i){
        if (s[i]==0){
            sc[i]=0;
            break;
        }
        if (!i && s[i]>'Z')
            first=true;
        if (s[i]<'a')
            cnt++;
        sc[i] = s[i]>'Z'? s[i]-'a'+'A' : s[i]+'a'-'A';
        len++;
    }
    if (cnt==len || (first && cnt==len-1))
        printf("%s\n", sc);
    else
        printf("%s\n",s);
    return 0;
}
