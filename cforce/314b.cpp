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
    vector<int> hist(1000000);
    int curr=0;
    int res=0;
    for (int i=0;i<n;++i){
        char c;
        int num;
        scanf(" %c %d", &c, &num);
        if (c=='-' && hist[num-1]==0){
            res++;
        }
        else if (c=='-' && hist[num-1]==1) {
            hist[num-1]=0;
            curr--;
        }
        else // c=='+'
        {
            hist[num-1]=1;
            curr++;
        }
        res=max(res,curr);
    }
    printf("%d\n", res);
    return 0;
}
