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
    string lin1;
    string lin2;
    cin>>lin1;
    cin>>lin2;
    int cnt=0;
    for (int i=0;i<n;++i){
        int x = lin1[i]-'0';
        int y = lin2[i]-'0';
        if (abs(x-y)>5)
            cnt+=min(x,y)+10-max(x,y);
        else
            cnt+=abs(x-y);
    }
    printf("%d\n", cnt);
    return 0;
}
