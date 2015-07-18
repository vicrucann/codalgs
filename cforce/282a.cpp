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
    scanf("%d", &n);
    int res=0;
    while (n--){
        //char str[3];
        //scanf("%s", str);
        string str;
        cin >> str;
        res+=(str[1]=='+')? 1 : -1;
    }
    printf("%d\n", res);
    return 0;
}
