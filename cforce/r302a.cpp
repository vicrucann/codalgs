
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
    int k;
    cin>>k;
    string s;
    cin>>s;
    vector<int> hist(26);
    for (int i=0;i<s.size();++i){
        hist[s[i]-'a']++;
    }
    int cnt=0;
    for (int i=0;i<26;++i){
        if (hist[i])
            cnt++;
    }
    if (cnt<k)
        printf("NO\n");
    else {
        printf("YES\n");
        k--;
        for (int i=0;i<s.size();++i){
            if (hist[s[i]-'a'] && i && k){
                printf("\n%c", s[i]);
                k--;
            }
            else
                printf("%c", s[i]);
            hist[s[i]-'a']=0;
        }
        printf("\n");
    }
    return 0;
}
