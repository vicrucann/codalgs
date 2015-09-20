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
    int x;
    cin>>x;
    int res=1;
    while (x>1){
        if (x%2==0)
            x/=2;
        else{
            x--;
            res++;
        }
    }
    printf("%d\n", res);
    return 0;
}
