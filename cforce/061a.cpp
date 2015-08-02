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
    string a,b;
    cin >> a;
    cin >> b;
    for (unsigned int i=0;i<a.size();++i){
        if (a[i]!=b[i])
            printf("1");
        else
            printf("0");
    }
    printf("\n");
    return 0;
}
