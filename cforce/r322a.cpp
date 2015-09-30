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
    int a,b;
    scanf("%d %d", &a, &b);
    int rest=max(a,b) - min(a,b);
    printf("%d %d\n", min(a,b), rest/2);
    return 0;
}
