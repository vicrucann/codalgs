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
    int n = strtol(s.c_str(),0,10);
    int cnt=0;
    for (int i=0;i<s.size();++i){
        if (s[i]=='4' || s[i]=='7')
            cnt++;
    }
    if (cnt==s.size() || n%4==0 || n%7==0 || n%47==0 || n%74==0 ||
            n%447==0 || n%474==0)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
