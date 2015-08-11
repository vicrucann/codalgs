
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
    int T,S,q;
    cin>>T>>S>>q;
    int cnt =1;
    S*=q;
    while (S<T){
        S*=q;
        cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}
