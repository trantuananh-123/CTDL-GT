#include<iostream>
#include<cstring>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string a, b, s = "";
        int k, kq = 0, nho = 0;
        cin >> k >> a >> b;
        if(a.size() < b.size()) swap(a, b);
        int x = a.size() - b.size();
        b.insert(0, x, '0');
        for(int i = a.size()-1; i >= 0; i--) {
            kq = (a[i] - '0') + (b[i] - '0') + nho;
            nho = kq/k;
            s.push_back((kq % k) + '0');
        }
        if(nho != 0) s.push_back(nho + '0');
        for(int i = s.size()-1; i >= 0; i--){
            cout << s[i];
        }
        cout << endl;
    }
    return 0;
}
