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
    char s1[101], s2[101];
    scanf("%s", s1);
    scanf("%s", s2);
    int sum1=0, sum2=0;
    for (int i=0;i<101;++i){
        if (s1[i]==0 || s2[i]==0)
            break;
        char c1 = s1[i]>'Z'? s1[i]-'a'+'A' : s1[i];
        char c2 = s2[i]>'Z'? s2[i]-'a'+'A' : s2[i];
        if (c1 == c2)
            continue;
        else{
            sum1 += c1;
            sum2 += c2;
            break;
        }
    }
    if (sum1<sum2)
        printf("-1\n");
    else if (sum2<sum1)
        printf("1\n");
    else
        printf("0\n");
    return 0;
}
