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
#include <utility>

using namespace std;

bool foo(const pair<int,int>& i, const pair<int,int>& j){
    return ((i.first > j.first));
}

int main(){
    cerr << "Check : 307a" << endl;

    int n;
    cin >> n;
    int a[n];
    //vector<pair <int,int> > a;
    //int res[n];
    for (int i=0;i<n;++i){
        cin >> a[i];
        //int c;
        //cin >> c;
        //res[i] = c;
        //a.push_back(make_pair(c,i));
    }
    //sort(a.begin(), a.end(), foo); // sort pair
    for (int i=0;i<n;++i){
        int resi=1;
        for (int j=0;j<n;++j){
            if (a[i] < a[j])
                resi++;
        }
        if (i)
            cout << " ";
        cout << resi;
    }
    return 0;
}
