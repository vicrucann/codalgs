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
#include <ctime>

using namespace std;

int main(){
    int k;
    vector<pair<int,int> > res;
    while (scanf("%d", &k)){
        //clock_t beg=clock();
        res.clear();
        for (int x=2*k; x>k; --x){
            if ((k*x) % (x-k) == 0)
                res.push_back(make_pair((k*x)/(x-k),x));
        }
        printf("%d\n", res.size());
        for (int i=res.size()-1;i>=0; --i){
            printf("1/%d = 1/%d + 1/%d\n", k, res[i].first, res[i].second);
        }
        //clock_t fin=clock();
        //cerr << double(fin-beg) / CLOCKS_PER_SEC << endl;
    }
    return 0;
}
