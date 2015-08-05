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
    string g,h,p;
    cin >> g;
    cin >> h;
    cin >> p;
    char hist[190]={};
    bool res=true;
    for (int i=0;i<g.size();++i)
        hist[int(g[i])]++;
    for (int i=0;i<h.size();++i)
        hist[int(h[i])]++;
    for (int i=0;i<p.size();++i)
        hist[int(p[i])]--;
    for (int i=0;i<190;++i){
        if (hist[i]!=0){
            res=false;
            break;
        }
    }
    if (res)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
