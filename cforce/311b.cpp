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

int main(){
    cerr << "311b" << endl;
    int n,w;
    scanf("%d %d", &n, &w);
    int a[2*n];
    for (int i=0;i<2*n; ++i){
        int ai;
        scanf("%d", &ai);
        a[i] = ai;
    }
    sort(a,a+2*n);
    double vg = min(a[0]*1., a[n]/2.);
    double vol = min(vg, (1.*w)/(3.*n));
    double res = 1.0*n*vol + 2.0*n*vol;
    printf("%.10f\n", res);
    //cout.precision(10);
    //cout << fixed << res << endl;
    return 0;
}
