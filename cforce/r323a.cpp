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
    vector<int> h(n);
    vector<int> v(n);
    vector<int> res;
    for (int i=0;i<n*n;++i){
        int hi,vi;
        cin>>hi>>vi;
        if (!h[hi-1] && !v[vi-1]){
            h[hi-1]=1;
            v[vi-1]=1;
            res.push_back(i+1);
        }
    }
    sort(res.begin(), res.end());
    for (unsigned int i=0;i<res.size();++i){
        if (i)
            printf(" ");
        printf("%d", res[i]);
    }
    printf("\n");
    return 0;
}
