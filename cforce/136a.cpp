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
    int q[n];
    for (int i=0;i<n;++i){
        int pi;
        cin>>pi;
        q[pi-1]=i+1;
    }
    for (int i=0;i<n;++i){
        printf("%d", q[i]);
        if (i<n-1)
            printf(" ");
        else
            printf("\n");
    }
    return 0;
}
