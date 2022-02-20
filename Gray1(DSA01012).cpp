#include<iostream>
#include<cstring>
#include<vector>

using namespace std;

vector<string> printGray(int n) {
    if(n == 0)return {"0"};
    if(n == 1)return {"0", "1"};
    vector<string> kq = printGray(n-1);
    vector<string> kq1;
    for(int i = 0; i < kq.size(); i++) {
        string s = kq[i];
        s = "0" + s;
        kq1.push_back(s);
    }
    for(int i = kq.size()-1; i >= 0; i--) {
        string s = kq[i];
        s = "1" + s;
        kq1.push_back(s);
    }
    return kq1;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<string> s = printGray(n);
        for(int i = 0; i < s.size(); i++) {
            cout << s[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
