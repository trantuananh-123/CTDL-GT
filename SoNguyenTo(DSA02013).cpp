#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int s, p, n, a[100000], b[100000], flag[100000], m;
vector<string> v;

void sangNguyenTo(int n, int p) {
    bool check[10000];
    for(int i = 2; i < n; i++) {
        check[i] = true;
    }
    for(int i = 2; i < n; i++) {
        if(check[i]) {
            for(int j = 2*i; j < n; j+=i) {
                check[j] = false;
            }
        }
    }
    for (int i = 2; i < n; i++) {
        if (check[i] && i > p) {
            a[m++] = i;
        }
    }
}

void in(int i) {
    string s = "";
    for(int j = 0; j <= i; j++) {
        s += to_string(a[b[j]]) + " ";
    }
    v.push_back(s);
}

void dequyTong(int i) {
    for(int j = 0; j < m; j++) {
        if(a[j] <= s && flag[j] == 0 && j >= b[i-1]) {
            s -= a[j];
            b[i] = j;
            flag[j] = 1;
            if(s == 0 && i == n-1) {
//                dem++;
                in(i);
            } else {
                dequyTong(i+1);
            }
            flag[j] = 0;
            b[i] = 0;
            s += a[j];
        }
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        m = 0;
        v.clear();
        cin >> n >> p >> s;
        sangNguyenTo(s, p);
        for (int i = 0; i < p; i++) {
            flag[i] = 0;
        }
        dequyTong(0);
        cout << v.size() << endl;
        sort(v.begin(), v.end());
        for(int i = 0; i < v.size(); i++){
            cout << v[i] << endl;
        }
    }
    return 0;
}
