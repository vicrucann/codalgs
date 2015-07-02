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
    }
    for (int i=0;i<n;++i){
        // energies for given length
        suff_enr[data[i].len] += data[i].enr;
        // number of given length
        suff_n[data[i].len]++;
    }
    sort(data,data+n); // sort from min to max

    int idb=0,n_curr=1; // indices of begin and end of current block
    int res = 0x7fffffff;
    multiset<int, less<int> > q_enr; // queue of energies from min to max
    multiset<int, less<int> >::iterator it_enr;
    while(idb + n_curr <= n){
        // define block boundaries and number of current elements
        int currE = suff_enr[data[idb].len];
        n_curr = suff_n[data[idb].len];
        // calc cost to remove larger legs
        int cost = totE - currE;
        totE -= currE;
        // remove legs that are smaller so that n_curr > n_small
        int n_past = q_enr.size();
        for (it_enr = q_enr.begin(); ; ++it_enr){
            if (n_past >= n_curr){
                n_past--;
                cost += *it_enr;
            }
            else
                break;
        }
        // next block initialization
        for (int i=idb;i<idb+n_curr;++i)
            q_enr.insert(data[i].enr);
        res = min(res,cost);
        idb+=n_curr;
    }
    printf("%d\n", res);
    return 0;
}
