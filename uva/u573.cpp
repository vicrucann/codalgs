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
    int H,U,D,F;
    while (true){
        scanf("%d %d %d %d", &H, &U, &D, &F);
        if (H == 0)
            break;
        int day=1;
        double h=0.0;
        double f=(double)F/100.0*(double)U;
        double h_=0.0;
        while (h<=H && h_>= 0){
            h=h_;
            double ff=f*(double(day)-1.0);
            if (ff < double(U))
                h += double(U) - ff;
            else
                h+=0.0;
            h_=h-double(D);
            day++;
        }
        if (h>double(H))
            printf("success on day %d\n", day-1);
        else
            printf("failure on day %d\n", day-1);
    }
    return 0;
}
