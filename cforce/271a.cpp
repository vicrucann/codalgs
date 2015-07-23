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
    int y;
    cin >> y;
    while (true){
        y++;
        char s[4];
        sprintf(s, "%d",y);
        if (s[0]!=s[1] && s[0]!=s[2] && s[0]!=s[3] &&
                s[1]!=s[2] && s[1]!=s[3] &&
                s[2]!=s[3])
            break;
    }
    printf("%d\n", y);
    return 0;
}
