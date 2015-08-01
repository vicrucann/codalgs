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
    string str;
    cin >> str;
    string pat="WUB";
    unsigned int i=0;
    unsigned int j=0;
    int first=1;
    while (i<str.size()){
        j = str.find(pat, i);
        if (j!=i){
            if (!first)
                printf(" ");
            printf("%s", (str.substr(i, j-i)).c_str());
            first=0;
            i=j;
        }
        else
            i+=3;
    }
    return 0;
}
