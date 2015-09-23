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
    int res=1;
    int ap=0;
    int mx=1;
    for (int i=0;i<n;++i){
        int ai;
        cin>>ai;
        if (i){
            if (ai>=ap)
                res++;
            else
                res=1;
        }
        ap=ai;
        mx=max(mx,res);
    }
    printf("%d\n", mx);
    return 0;
}
