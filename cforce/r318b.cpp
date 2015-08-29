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

const int N=4000;
int ab[N][N];

int main(){
    int n,m;
    cin>>n>>m;
    //int ab[n][n];
    vector<int> hist(n);
    for (int i=0;i<m;++i){
        int ai,bi;
        cin>>ai>>bi;
        ab[ai-1][bi-1]=1;
        ab[bi-1][ai-1]=1;
        hist[ai-1]++;
        hist[bi-1]++;
    }
    int mn=500000;
    for (int i=0;i<n;++i){
        if (hist[i]>=2){
        for (int j=0;j<n;++j){
            if (hist[j]>=2 && j!=i &&ab[i][j]==1 ){
            for (int k=0;k<n;++k){
                if (hist[k]>=2 && j!=k && i!=k){
                    if ( ab[j][k]==1 && ab[i][k]==1)
                        mn=min(mn, hist[i]+hist[j]+hist[k]-6);
                }
            }}
        }}
    }
    if (mn<500000)
        printf("%d\n", mn);
    else
        printf("-1\n");
    return 0;
}
