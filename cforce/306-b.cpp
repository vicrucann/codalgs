#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n,l,r,x;
    cin >> n >> l >> r >> x;
    int c[n];
    for (int i=0;i<n;++i)
        cin >> c[i];
    int len = pow(2,n);
    int resglo=0;
    for (int i=0;i<len;++i){
        int resloc=0;
        int mn=1000000001;
        int mx=-1;
        int num=0;
        for (int j=0;j<n;++j){
            if ((1<<j)&i){
                if (c[j]>mx)
                    mx=c[j];
                if (c[j]<mn)
                    mn=c[j];
                num++;
                resloc+=c[j];
            }
        }
        if (num>=2 && resloc>=l && resloc<=r && mx-mn>=x)
            resglo++;
    }
    cout << resglo << endl;
    return 0;
}
