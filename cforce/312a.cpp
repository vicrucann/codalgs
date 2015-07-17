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
    cerr << "312a" << endl;
    int n;
    scanf("%d", &n);
    int x[n];
    int a[n];
    int posd=1000000, negd=1000000, posn=0, negn=0;
    int posa =0, nega=0;
    vector<pair <int,int> > pos_apple;
    vector<pair <int,int> > neg_apple;
    for (int i=0;i<n;++i){
        scanf("%d %d", &x[i], &a[i]);
        if (x[i] > 0){
            posn++;
            posd = min(x[i], posd);
            posa += a[i];
            pos_apple.push_back(make_pair(x[i], a[i]));
        }
        else{
            negn++;
            negd = min(abs(x[i]), negd);
            nega += a[i];
            neg_apple.push_back(make_pair(abs(x[i]), a[i]));
        }
    }
    sort(pos_apple.begin(), pos_apple.end());
    sort(neg_apple.begin(), neg_apple.end());
    int res=0;
    bool dir=true;
    if (negn>posn)
        dir=false;
    int ip=0,in=0;
    while (true){
        if (dir){
            res+=pos_apple[ip].second;
            ip++;
        }
        else{
            res += neg_apple[in].second;
            in++;
        }
        dir = !dir;
        if (dir && ip>=pos_apple.size())
            break;
        if (!dir && in>=neg_apple.size())
            break;
    }
    printf("%d\n", res);
    return 0;
}
