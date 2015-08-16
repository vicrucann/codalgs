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
    int n,m;
    cin>>n>>m;
    vector<int> hist(n);
    for (int i=0;i<m;++i){
        int v=0;
        int sc=0;
        for (int j=0;j<n;++j){
            int aij;
            cin>>aij;
            if (aij>sc){
                v=j;
                sc=aij;
            }
        }
        hist[v]++;
    }
    int res=0;
    int id=0;
    for (int i=0;i<n;++i){
        if (hist[i]>res){
            res=hist[i];
            id = i;
        }
    }
    printf("%d\n", id+1);
    return 0;
}
