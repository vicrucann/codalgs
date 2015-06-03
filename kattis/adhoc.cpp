#include <cstdio>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void eightqueens(){
    int w=8;
    string line;
    bool a[w][w];
    int qis[8], qjs[8];
    int k=0;
    for (int i=0;i<w;++i) {
        getline(cin,line);
        for (int j=0;j<w;++j){
			a[i][j]=(line[j]=='*');        
            if (a[i][j]){
                qis[k]=i;
                qjs[k]=j;
                k++;
            }
        }
    }

    for (int k=0;k<w;++k){
        for (int l=0; l<w; ++l){
            if (k==l)
                continue;
            if (qis[k]==qis[l] || qjs[k]==qjs[l] || abs(qis[k]-qis[l])==abs(qjs[k]-qjs[l])){
                printf("invalid\n");
                return;
            }
        }
    }
    printf("valid\n");
}

void toilet(){
    string line;
    getline(cin,line);
    int p1=0;
    int p2=0;
    int p3=0;

    for (unsigned int i=0;i<line.length();++i){
        if (i>0){
            if (line[i]=='U')
                p2+=2;
            else
                p1+=2;
            if (line[i]!=line[i-1])
                p3++;
        }
        else {
            if (line[0]==line[1] && line[0]=='U'){
                p2--;
            }
            if (line[0]==line[1] && line[0]=='D'){
                p1--;
            }
            if (line[0]!=line[1] && line[0]=='U'){
                p2++;
            }
            if (line[0]!=line[1] && line[0]=='D'){
                p1++;
            }

        }
    }
    printf("%i\n%i\n%i\n", p1,p2,p3);
}

string keys[12] = {
    "","abc","def",
    "ghi","jkl","mno",
    "pqrs","tuv","wxyz",
    ""," ",""};

void t9(){
    int n;
    scanf("%d\n",&n);
    int x=1;
    string out;
    int out = -1;
    while(n--){
        string line;
        getline(cin, line);

        printf("Case #%d: ", x);
        for (unsigned int i=0;i<line.length();++i){
            for (unsigned int j=0;j<12;++j){
                for (unsigned int k=0;k<keys[j].size();++k){
                    if (line[i] == keys[j][k]){
                        int test = j==10? 0 : j+1;
                        if (test==out){
                            printf(" ");
                        }
                        for (unsigned int p=0;p<=k;++p){
                            out = j==10? 0 : j+1;
                            printf("%d", out);
                        }
                        break;
                    }
                }
            }
        }
        printf("\n");
        x++;
    }
}

int main(){
    //eightqueens();
    //toilet();
    t9();
    return 0;
}
