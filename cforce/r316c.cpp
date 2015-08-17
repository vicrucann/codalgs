
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

int fundot(string s){
    int res=0;
    int p1=0,p2=0;
    while (p2<s.size()){
        while (s[p1]!='.' && p1<s.size())
            p1++;
        p2=p1+1;
        while (s[p2]=='.' && p2<s.size())
            p2++;
        if (p2-p1>=2){
            res+=(p2-p1)-1;
        }
        p1=p2;
    }
    return res;
}

int main(){
    int n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    int ini = fundot(s);
    while (m--){
        int xi;
        char ci;
        scanf("%d %c", &xi, &ci);
        int i = xi-1;
        int diff = 0;
        if (i>0 && i<s.size()-1){
            if (ci=='.'){
                if (s[i-1]=='.' && s[i+1]=='.' && s[i]!='.')
                    diff+=2;
                else if ((s[i-1]=='.' || s[i+1]=='.') && s[i]!='.')
                    diff++;
            }
            else {
                if (s[i-1]=='.' && s[i+1]=='.' && s[i]=='.')
                    diff-=2;
                else if ((s[i-1]=='.' || s[i+1]=='.') && s[i]=='.')
                    diff--;
            }
        }
        else if (i==0){
            if (s[i+1]=='.' && ci=='.' && s[i]!='.')
                diff++;
            else if (ci!='.' && s[i+1]=='.' && s[i]=='.')
                diff--;
        }
        else {
            if (s[i-1]=='.' && ci=='.' && s[i]!='.')
                diff++;
            else if (ci!='.' && s[i-1]=='.' && s[i]=='.')
                diff--;
        }
        s[i] = ci;
        ini+=diff;
        printf("%d\n", ini);
    }
    return 0;
}
