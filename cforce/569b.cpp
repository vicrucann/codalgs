
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
    cin>>n;
    int a[n];
    vector<int> hist(100000);
    for (int i=0;i<n;++i){
        cin>>a[i];
        hist[a[i]-1]++;
    }
    list<int> lst;
    for (int j=0;j<n;++j){
        if (hist[j]==0)
            lst.push_front(j+1);
    }
    for (int i=0;i<n;++i){
        if (i)
            printf(" ");
        if (hist[a[i]-1]!=1 || a[i]>n){
            assert(!lst.empty());
            printf("%d", lst.front());
            lst.pop_front();
            hist[a[i]-1]--;
        }
        else
            printf("%d", a[i]);
    }
    printf("\n");
    return 0;
}
