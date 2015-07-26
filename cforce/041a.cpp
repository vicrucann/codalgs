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
    string q,p;
    cin >> q;
    cin >> p;
    int res=1;
    for (unsigned int i=0;i<q.size();++i){
        if (q[i]!=p[p.size()-i-1]){
            res=0;
            break;
        }
    }
    res==1? printf("YES\n") : printf("NO\n");
    return 0;
}
