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
    int cnt=0;
    for (int i=0;i<n;++i){
        if (i==0)
            cnt+=n-i;
        else if (i<n-1)
            cnt+=(n-i)*i+1;
        else
            cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}
