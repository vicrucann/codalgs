#include <string>
#include <iostream>

using namespace std;

int main(){
    string s;
    cin >> s;
    string AB="AB";
    string BA="BA";
    int x1 = s.find(AB);
    int y1 = s.find(BA);
    int x2 = s.find(AB,y1+2);
    int y2 = s.find(BA,x1+2);
    cerr << x1 << y1 << x2 << y2 << endl;
    if ((y2-x1>=2 && y2>=0 && x1>=0) || (x2-y1>=2 && x2>=0 && y1>=0))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
