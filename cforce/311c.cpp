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

using namespace std;

bool desc(const pair<int,int>& i, const pair<int,int>& j){
    return ((i.first < j.first) || (i.second < j.second));
}

int main(){
    cerr << "311c" << endl;
    int n;
    scanf("%d", &n);
    vector<pair <int,int> > p;
    vector<int> l(n);
    vector<int> d(n);
    for (int i=0;i<n;++i){
        scanf("%d", &l[i]);
    }
    for (int i=0; i<n; ++i){
        scanf("%d", &d[i]);
    }
    for (int i=0; i<n; ++i){
        p.push_back(make_pair(l[i], d[i]));
    }
    sort(p.begin(), p.end(), desc);
    int maxl = p[0].first;
    int mine = 10000000;
    int idx=1;
    while (idx<p.size()){
        while (p[idx].first == maxl)
            idx++;
        int nleg = idx;
        int ntot = 2*nleg+1;

    }
    return 0;
}
