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
    int a[n][n];
    for (int i=0;i<n;++i){
        for (int j=0;j<n;++j){
            if (i==0 || j==0)
                a[i][j]=1;
            else
                a[i][j]=a[i-1][j]+a[i][j-1];
        }
    }
    printf("%d\n", a[n-1][n-1]);
    return 0;
}
