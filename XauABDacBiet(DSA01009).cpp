#include<iostream>
#include<cstring>

using namespace std;

bool check(string s, int k) {
    int dem = 1, kq = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == 'A') {
            i++;
            while(s[i] == 'A') {
                dem++;
                i++;
            }
            if(dem == k) return true;
            else dem = 1;
        }
    }
    return false;
}

int main() {
    int n, m, k, d = 0;
    cin >> n >> k;
    string s = "", kq[1000];
    while(n--) {
        s += 'A';
    }
    bool flag = true;
    while(flag) {
        int m = s.size()-1;
        while(s[m] == 'B' && m >= 0) m--;
        if(m < 0) flag = false;
        else {
            s[m] = 'B';
            int j = m + 1;
            while(j < s.size()) {
                s[j] = 'A';
                j++;
            }
            if(check(s, k)) kq[d++] = s;
        }
    }
    cout << d << endl;
    for(int i = 0; i < d; i++) {
        cout << kq[i] << endl;
    }
    return 0;
}
