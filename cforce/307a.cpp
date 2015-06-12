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
    vector<pair <int,int> > a;
    int res[n];
    for (int i=0;i<n;++i){
        int c;
        cin >> c;
        res[i] = c;
        a.push_back(make_pair(c,i));
    }
    sort(a.begin(), a.end(), foo);

    int sc_p=1, p_p=1;
    int resc[n];
    for (int i=0;i<n;++i){
        if (i==0){
            sc_p=a[i].first;//res[a[i].second];
            p_p = 1;
            resc[a[i].second]=p_p;
        }
        else {
            int sc = a[i].first;//res[a[i].second];
            if (sc == sc_p){
                resc[a[i].second]=p_p;
            }
            else{
                p_p=i+1;
                sc_p = a[i].first; //res[a[i].second];
                resc[a[i].second]=p_p;
            }
        }
    }
    for (int i=0;i<n;++i){
        if (i==0)
            cout << resc[i];
        else
            cout << " " << resc[i];
    }

    return 0;
}
