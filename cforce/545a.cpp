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
    vector<int> hst(n);
    for (int i=0;i<n;++i){
        for (int j=0;j<n;++j){
            int ai;
            cin>>ai;
            if (ai==1 || ai==3)
                hst[i]++;
            if (ai==2 || ai==3)
                hst[j]++;
        }
    }
    int cnt=0;
    vector<int> lst;
    for (int i=0;i<n;++i){
        if (!hst[i]){
            cnt++;
            lst.push_back(i+1);
        }
    }
    sort(lst.begin(), lst.end());
    printf("%d\n", cnt);
    for (unsigned int i=0;i<lst.size();++i){
        if (i)
            printf(" ");
        printf("%d", lst[i]);
    }
    printf("\n");
    return 0;
}
