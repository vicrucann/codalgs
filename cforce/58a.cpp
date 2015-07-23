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
    string s;
    cin >> s;
    int i=0, j=0;
    string m = "hello";
    while (i<s.length()){
        i++;
        if (s[i-1]==m[j])
            j++;
        if (j==5)
            break;
    }
    if (j==5)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
