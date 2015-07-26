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
    int n,t;
    scanf("%d %d", &n, &t);
    char q[51];
    scanf("%s", q);
    while(t--){
        if (n==1)
            break;
        int i=1;
        while(q[i]!=0 || i<51){
            if (q[i-1]=='B' && q[i]=='G'){
                q[i-1]='G';
                q[i]='B';
                i+=2;
            }
            else
                ++i;
        }
    }
    printf("%s\n", q);
    return 0;
}
