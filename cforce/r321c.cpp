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

#define graph vector<pair<int, vector<int> > >

int dfs(const graph& T, int v, vector<int>& visited, const int m, int& cnt, int mm){
    visited[v]=1;
    if (T[v].first)
        mm++;
    else
        mm=0;
//   printf("vertex %d, kids %d, mm=%d, next_kid=%d, visited_kid=%d\n", v+1,(int)T[v].second.size(),mm,T[v].second[0], visited[T[v].second[0]]);
    if (mm<=m){
        if (T[v].second.size()==1 && visited[T[v].second[0]]) // leaf?
                cnt++;
        else{
            for (unsigned int w=0;w<T[v].second.size();++w){
                if (!visited[T[v].second[w]])
                    cnt=dfs(T,T[v].second[w],visited,m,cnt,mm);
            }
        }
    }
    return cnt;
}


int main(){
    int n,m;
    scanf("%d %d", &n, &m);
    graph T(n);
    for (int i=0;i<n;++i){
        int ai;
        scanf("%d", &ai);
        T[i].first = ai;
    }
    for (int i=0;i<n-1;++i){
        int x,y;
        scanf("%d %d", &x, &y);
        T[x-1].second.push_back(y-1);
        T[y-1].second.push_back(x-1);
    }
    int cnt=0,mm=0;
    vector<int> visited(n);
    cnt = dfs(T, 0,visited, m, cnt, mm);
    printf("%d\n", cnt);
    return 0;
}
