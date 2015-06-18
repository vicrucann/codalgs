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
    int N,B,H,W;
    int p[H];
    int a[H][W];
    scanf("%d %d %d %d", &N, &B, &H, &W);
    for (int i=0;i<H;++i){
	scanf("%d", &p[i]);
	for (int j=0;j<W;++j)
	    scanf("%d", &a[i][j]);
    }
    return 0;
}
