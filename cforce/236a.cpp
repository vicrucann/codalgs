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
    string sen;
    cin >> sen;
    int ltr[33]={};
    for (int i=0;i<sen.size(); ++i){
        int idx = sen[i]-'a';
        assert(idx>=0 && idx <=33);
        ltr[idx]++;
    }
    int res=0;
    for (int i=0;i<33;++i){
        if (ltr[i])
            res++;
    }
    if (res%2==0)
        printf("CHAT WITH HER!\n");
    else
        printf("IGNORE HIM!\n");
    return 0;
}
