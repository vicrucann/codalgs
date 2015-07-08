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
    int s[n];
    for (int i=0;i<=n;++i){
        char c;
        scanf("%c", &c);
        if (i)
            s[i-1]=c-'0';
    }
    int l=0;
    for (int i=0;i<n;++i){
        if (s[i]) l++;
        else l--;
    }
    printf("%d\n",abs(l));
    return 0;
}
