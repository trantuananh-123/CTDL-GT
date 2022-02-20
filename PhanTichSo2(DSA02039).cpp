#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int n, a[10000], b[10000];
vector<string> v;

void Try(int i) {
    for(int j = n; j >= 1; j--) {
        if(n > 0 && a[j] >= a[b[i-1]]) {
            n -= a[j];
            b[i] = j;
            if(n == 0) {
                string s = "";
                s += '(';
                for(int k = i; k >= 1; k--) {
                    s += to_string(a[b[k]]);
                    if(k != 1) s += " ";
                }
                s += ')';
                v.push_back(s);
            } else {
                Try(i+1);
            }
            n += a[j];
        }
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        cin >> n;
        for(int i = 1; i <= n; i++) {
            a[i] = i;
        }
        Try(1);
        sort(v.begin()+1, v.end(), greater<string>());
        for(int i = 0; i < v.size(); i++) {
            cout << v[i] << " ";
        }
        cout << endl;
        v.clear();
    }
    return 0;
}


