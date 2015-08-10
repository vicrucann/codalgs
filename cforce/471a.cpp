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
    int l[6];
    int hist[10]={};
    for (int i=0;i<6;++i){
        cin>>l[i];
        hist[l[i]]++;
    }
    int paws=0,elef=0;
    for (int i=0;i<10;++i){
        if (hist[i]>=4)
            paws=1;
        if (hist[i]==2||hist[i]-4==2)
            elef=1;
    }
    if (paws&&!elef)
        printf("Bear\n");
    else if (paws&&elef)
        printf("Elephant\n");
    else
        printf("Alien\n");
    return 0;
}
