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

struct Triplet{
    int sum, i, j;
};

bool cmp(const Triplet& t1, const Triplet& t2){
    return t1.sum > t2.sum;
}

int main(){
    int n;
    cin>>n;
    int res[2*n+1];
    int m=(2*n-1)*(2*n)/2;
    vector<Triplet> A(m);
    int id=0;
    for (int i=2;i<=2*n;++i){
        for (int j=1;j<=i-1;++j){
            int aij;
            cin>>aij;
            Triplet tri;
            tri.sum=aij;
            tri.i=i;
            tri.j=j;
            A[id]=tri;
            id++;
        }
    }
    sort(A.begin(), A.end(), cmp);
    vector<int> marked(2*n+1);
    for (unsigned int i=0;i<A.size();++i){
        if (!marked[A[i].i] && !marked[A[i].j]){
            res[A[i].i]=A[i].j;
            res[A[i].j]=A[i].i;
            marked[A[i].i]=1;
            marked[A[i].j]=1;
        }
    }
    for (int i=1;i<=2*n; ++i){
        if (i-1)
            printf(" ");
        printf("%d", res[i]);
    }
    printf("\n");
    return 0;
}
