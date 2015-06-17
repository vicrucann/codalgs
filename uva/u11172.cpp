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

using namespace std;

int main(){
    cerr << "11172" << endl;
    int t;
    scanf("%d", &t);
    while (t--){
        int a,b;
        scanf("%d %d", &a, &b);
        printf("%c\n", a>b? '>': (a==b? '=': '<'));
    }
    return 0;
}

