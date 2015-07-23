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
    string s;
    cin >> s;
    int cnt=0;
    for (int i=0;i<s.size();++i){
        if (s[i]=='4' || s[i]=='7')
            cnt++;
    }
    if (cnt==4 || cnt==7)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
