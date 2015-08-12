
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
    string s,t;
    getline(cin,s);
    getline(cin,t);
    int n=s.size();
    int cnt=0;
    for (int i=0;i<n;++i){
        if (s[i]!=t[i])
            cnt++;
    }
    if (cnt%2==0){
        cnt/=2;
        for (int i=0;i<n;++i){
            if (s[i]!=t[i] && cnt){
                printf("%d", !(s[i]-'0'));
                cnt--;
            }
            else
                printf("%d", s[i]-'0');
        }
        printf("\n");
    }
    else
        printf("impossible\n");
    return 0;
}
