#include<iostream>
#include<cstring>
#include<sstream>

using namespace std;

int main() {

    string a, b, c, d;
    cin >> a >> b;
    c = a;
    d = b;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] == '6') a[i] = '5';
    }
    for(int i = 0; i < a.size(); i++) {
        if(b[i] == '6') b[i] = '5';
    }
    for(int i = 0; i < c.size(); i++) {
        if(c[i] == '5') a[i] = '6';
    }
    for(int i = 0; i < d.size(); i++) {
        if(d[i] == '5') d[i] = '6';
    }
    stringstream s1(a);
    stringstream s2(b);
    stringstream s3(c);
    stringstream s4(d);
    int x, y, z, t;
    s1 >> x;
    s2 >> y;
    s3 >> z;
    s4 >> t;
    cout << x + y << " " << z + t;
    return 0;
}
