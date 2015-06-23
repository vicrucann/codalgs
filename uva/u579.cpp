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
    int H,M;
    scanf("%d:%d", &H, &M);
    while(H!=0 || M!=0){
        double d=0;
        double am = M*6;
        double ah= (H%12)*30 + M*0.5;
        double a = max(am,ah)-min(am,ah);
        printf("%.3f\n", a>180?360-a : a);
        scanf("%d:%d", &H, &M);
    }
    return 0;
}
