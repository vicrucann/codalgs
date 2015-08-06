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
    int mx=0, mn=0;
    int cnt=0;
    int pre=0;
    for (int i=0;i<n;++i){
        int sco;
        cin>>sco;
        if (!i){
            mn=sco;
            mx=sco;
        }
        else {
            if (sco>mx){
                cnt++;
                mx=sco;
            }
            if (sco<mn){
                cnt++;
                mn=sco;
            }
        }
    }
    printf("%d\n", cnt);
    return 0;
}
