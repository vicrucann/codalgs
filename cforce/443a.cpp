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
    string ln;
    getline(cin, ln);
    int a[150]={};
    for (unsigned int i=0;i<ln.size();++i){
        if (ln[i]>='a'&&ln[i]<='z')
        {
            a[int(ln[i])]++;
        }
    }
    int cnt=0;
    for (unsigned int i=0;i<150;++i){
        if (a[i])
            cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}
