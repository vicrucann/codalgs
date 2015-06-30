#include <iostream>
#include <cstring>
#include <stdlib.h>
#include <stdio.h>
#include <string>

using namespace std;

int main(){
	string s;
	cin >> s;
	int len = s.length();
	bool res=false;
	int val=-1;
	bool fin=false;
	for (int i=len-1;i>=0;--i){
		if (fin)
			break;
		for (int j=i-1;j>=-1;--j){
			if (fin)
				break;
			for (int k=j-1;k>=-2;--k){
				string s0="";
				if (i<=j || j<=k || i<=k)
					continue;
				if (j<0){
					s0+=s[i]; // add char
				}//1 number
				if (k<0){
					s0+=s[j];
					s0+=s[i];
				}//2 numbers
				if (k>=0&&j>=0){
					s0+=s[k];
					s0+=s[j];
					s0+=s[i];
				}//3 numbers
				val = strtol(s0.c_str(),0,0);
				if (val%8==0){
					res=true;
					cerr << "break: " << k << j << i << " " << val << endl;
					fin=true;
					break;
				}
			}
		}
	}
	if (!res)
		cout << "NO" << endl;
	else 
		cout << "YES" << endl << val << endl;
	return 0;
}
