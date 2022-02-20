#include<iostream>
#include<sstream>
#include<cstring>

using namespace std;

int main() {
    string a, b, c, d;
    cin >> a >> b;
    c = a;
    d = b;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] == '5') a[i] = '6';
    }
    for(int i = 0; i < c.size(); i++) {
        if(c[i] == '6') c[i] = '5';
    }
    for(int i = 0; i < b.size(); i++) {
        if(b[i] == '5') b[i] = '6';
    }
    for(int i = 0; i < d.size(); i++) {
        if(d[i] == '6') d[i] = '5';
    }
    stringstream s1(a), s2(b), s3(c), s4(d);
    int x, y, z, t;
    s1 >> x;
    s2 >> y;
    s3 >> z;
    s4 >> t;
    cout << z + t << " " << x + y;
    return 0;
}
