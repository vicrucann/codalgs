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

int hist[1000001];
int le[1000001];
int ri[1000001];

int main(){
    cerr << "312b" << endl;
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i=0;i<n;++i){
        scanf("%d", &a[i]);
        hist[a[i]]++;
        ri[a[i]] = max(ri[a[i]], i);
        if (hist[a[i]]==1)
            le[a[i]]=1000009;
        le[a[i]] = min(le[a[i]], i);
    }
    cerr << "reading done" << endl;
    int l=0,r=1000009,v=0;
    for (int i=0;i<1000001;++i){
        if (hist[i]>v){
            v=hist[i];
            r=ri[i];
            l=le[i];
        }
        else if (hist[i]==v && r-l > ri[i]-le[i]){
            r=ri[i];
            l=le[i];
        }
    }
    printf("%d %d\n", l+1, r+1);
    return 0;
}
