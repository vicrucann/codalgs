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
    while (n--){
        string s;
        cin >> s;
        if (s.length()>10)
            printf("%c%d%c\n", s[0], s.length()-2, s[s.length()-1]);
        else
            printf("%s\n", s.c_str());
    }
    return 0;
}
