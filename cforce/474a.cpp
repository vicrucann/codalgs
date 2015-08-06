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
    string pat ="qwertyuiopasdfghjkl;zxcvbnm,./";
    char sh;
    scanf(" %c", &sh);
    string lin;
    cin>>lin;
    for (int i=0;i<lin.size();++i){
        int pos = pat.find(lin[i]);
        if (sh=='R')
            printf("%c", pat[pos-1]);
        else
            printf("%c", pat[pos+1]);
    }
    return 0;
}
