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
    int n,m;
    cin>>n>>m;
    int A;
    if (n%2==1){
        if (n>1){
        if (m>=n/2+1)
            A=m-1;
        else
            A=m+1;}
        else
            A=1;
    }
    else{
        if (m>n/2)
            A=m-1;
        else
            A=m+1;
    }
    printf("%d\n", A);
    return 0;
}
