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

struct Tri{
    int x,y,z;
};

bool cmp(const Tri& i, const Tri& j){
    return ((i.z > j.z));
}

int main(){
    cerr << "Check 307c" << endl;
    int n,m;
    cin >> n >> m;
    //vector<Tri> a;
    int a[n];
    int sum=0;
    for (int i = 0; i < n; ++i){
        int w;
        cin >> w;
        //a.push_back((w,i,w*i));
        a[i]=w;
        sum+=w;
    }
    //sort(a.begin(), a.end(), cmp);
    int t=0;
    for (int i=0;i<n;i++){
        t+=i+1+(a[i]);
    }


    return 0;
}
