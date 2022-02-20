#include<iostream>
#include<cstring>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s, kq = "";
        cin >> s;
        kq += s[0];
        for(int i = 1; i < s.size(); i++) {
            if(kq[i-1] == s[i]) {
                kq += "0";
            } else {
                kq += "1";
            }
        }
        cout << kq << endl;
    }
    return 0;
}
