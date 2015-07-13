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
    char res[101];
    for (int i=0;i<101;++i){
        if (s[i]==0){
            printf("\n");
            break;
        }
        if ((s[i]!='a' && s[i]!='A') &&
                (s[i]!='o' && s[i]!='O') &&
                (s[i]!='y' && s[i]!='Y') &&
                (s[i]!='e' && s[i]!='E') &&
                (s[i]!='u' && s[i]!='U') &&
                (s[i]!='i' && s[i]!='I')){
            char l = s[i];
            if (l<'a')
                l = s[i] + ('a'-'A');
            printf(".%c", l);
        }
    }
    return 0;
}
