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
    cin>>n;
    string lin;
    cin>>lin;
    int hist[30]={};
    for (unsigned int i=0;i<lin.size();++i){
        if (lin[i]<'a')
            hist[lin[i]-'A']++;
        else
            hist[lin[i]-'a']++;
    }
    int cnt=0;
    for (int i=0;i<30;++i){
        if (hist[i])
            cnt++;
    }
    if (cnt==26)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
