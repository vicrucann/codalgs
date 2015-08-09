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
    int npo=0;
    while (n--){
        int x;
        cin>>x;
        if (x==-1 && npo<1)
            cnt++;
        else if (x==-1 && npo>=1)
            npo--;
        else
            npo+=x;
    }
    printf("%d\n", cnt);
    return 0;
}
