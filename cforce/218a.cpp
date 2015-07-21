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
    string sen;
    cin >> sen;
    sen[0] = sen[0]>'Z'? sen[0]-'a'+'A': sen[0];
    cout << sen << endl;
    return 0;
}
