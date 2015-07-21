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
    const char* cstr = str.c_str();
    int sum[4]={};
    int len=0;
    for (int i=0;i<102;i+=2){
        if (cstr[i]<'1' || cstr[i]>'3')
            break;
        len++;
        cerr << cstr[i] << ' ' << i << endl;
        int idx=cstr[i]-'0';
        assert(idx>=1 && idx <=3);
        sum[idx]++;
    }
    for (int i=1;i<4;++i){
        for (int j=0;j<sum[i];++j){
            len--;
            printf("%d", i);
            if (len)
                printf("+");
        }
    }
    printf("\n");
    return 0;
}
