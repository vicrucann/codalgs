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
    scanf("%d", &n);
    int s[n];
    int h[4]={};
    for (int i=0;i<n;++i){
        scanf("%d", &s[i]);
        h[s[i]-1]++;
    }
    int cnt = h[3]; // 4 ppl
    h[0]=(h[2]>=h[0])? 0 : (h[0]-h[2]);
    cnt+=h[2]; // 3+1
    cnt+=(h[1]*2)/4;
    h[0]+=(h[1]*2)%4;
    cnt+=ceil(h[0]/4.0);
    printf("%d\n", cnt);
    return 0;
}
