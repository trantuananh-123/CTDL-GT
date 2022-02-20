#include<iostream>
#include<cstring>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s, kq = "";
        cin >> s;
        for(int i = s.size()-1; i > 0; i--) {
            if(s[i] == s[i-1]) {
                kq = "0" + kq;
            } else kq = "1" + kq;
        }
        kq = s[0] + kq;
        cout << kq << endl;
    }
    return 0;
}
