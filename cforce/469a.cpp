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
    int p;
    scanf("%d", &n);
    scanf("%d", &p);
    int hist[n]={};
    for (int i=0;i<p;++i){
        int a;
        scanf("%d", &a);
        hist[a-1]++;
    }
    scanf("%d", &p);
    for (int i=0;i<p;++i){
        int b;
        scanf("%d", &b);
        hist[b-1]++;
    }
    bool res=true;
    for (int i=0;i<n;++i){
        if (hist[i]==0)
            res=false;
    }
    if (res)
        printf("I become the guy.\n");
    else
        printf("Oh, my keyboard!\n");
    return 0;
}
