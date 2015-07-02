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

typedef pair<int, int> pari;
#define len first
#define enr second

static const int MXN = 100010;

int main(){
    cerr << "311c" << endl;
    int n;
    scanf("%d", &n);
    pari data[n];
    int suff_enr[MXN];
    int suff_n[MXN];
    for (int i=0;i<n;++i){
        scanf("%d", &data[i].len);
    }
    int totE=0;
    for (int i=0;i<n;++i) {
        scanf("%d", &data[i].enr);
        totE += data[i].enr;
        suff_enr[data[i].len] += data[i].enr;
        suff_n[data[i].len]++;
    }
    sort(data,data+n); // sort from min to max

    int idb=0,n_curr=1; // indices of begin and end of current block
    int res = totE+1;
    multiset<int, greater<int> > q_enr; // queue of energies from min to max
    multiset<int, greater<int> >::iterator it_enr;
    int pastE=0, futE=totE;
    while(idb + n_curr <= n){
        int currE = suff_enr[data[idb].len];
        n_curr = suff_n[data[idb].len];
        int cost = futE - currE + pastE;
        futE -= currE;
        pastE += currE;
        int n_past = q_enr.size();
        int n_leave = min(n_past, n_curr - 1);
        for (it_enr = q_enr.begin(); n_leave > 0; ++it_enr, n_leave--)
            cost -= *it_enr;
        for (int i=idb;i<idb+n_curr;++i)
            q_enr.insert(data[i].enr);
        res = min(res,cost);
        idb+=n_curr;
    }
    printf("%d\n", res);
    return 0;
}
