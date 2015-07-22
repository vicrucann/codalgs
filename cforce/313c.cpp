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
    int a[6];
    double x[7], y[7];
    for (int i=0;i<6;++i){
        scanf("%d", &a[i]);
    }
    double pi=acos(-1);
    x[0]=2000.0;
    y[0]=2000.0;

    cerr << x[0] << " " << y[0] << endl;

    x[1]=x[0]+a[1];
    y[1]=x[0];
    cerr << x[1] << " " << y[1] << endl;

    x[2]=x[1]+0.5*a[2];
    y[2]=y[1]-cos(pi/6)*a[2];
    cerr << x[2] << " " << y[2] << endl;

    x[3]=x[2]-0.5*a[3];
    y[3]=y[2]-cos(pi/6)*a[3];
    cerr << x[3] << " " << y[3] << endl;

    x[4]=x[3]-a[4];
    y[4]=y[3];
    cerr << x[4] << " " << y[4] << endl;

    x[5]=x[4]-0.5*a[5];
    y[5]=y[4]+cos(pi/6)*a[5];
    cerr << x[5] << " " << y[5] << endl;

    double sum1=x[0]*y[1]+x[1]*y[2]+x[2]*y[3]+x[3]*y[4]+x[4]*y[5]+x[5]*y[0];
    double sum2=y[0]*x[1]+y[1]*x[2]+y[2]*x[3]+y[3]*x[4]+y[4]*x[5]+y[5]*x[0];
    cerr << "sums " << sum1 << " " << sum2 << endl;

    double area=abs(sum1-sum2)*0.5;
    double art=0.25*sqrt(3);
    printf("%.0f\n", area/art);
    //double res=(area/art);
    //printf("%d\n", res);

    return 0;
}
