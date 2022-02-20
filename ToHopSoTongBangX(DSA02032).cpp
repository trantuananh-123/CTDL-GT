#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int n, x, a[10000], flag, b[10000], flag1[1000];
vector<string> v;

void in(int i) {
    string s = "";
    s += "{";
    for(int j = 0; j <= i; j++) {
        s += to_string(a[b[j]]);
        if(j != i) s += " ";
    }
    s += "}";
    v.push_back(s);
}

void sinh(int i, int k, int x) {
    for(int j = 0; j < n; j++) {
        if(a[j] <= x && k <= j && flag1[i] == 0) {
            x -= a[j];
            b[i] = j;
            flag1[i] = 1;
            if(x == 0) {
                flag = 1;
                in(i);
            } else sinh(i+1, j, x);
            b[i] = 0;
            x += a[j];
            flag1[i] = 0;
        }
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        cin >> n >> x;
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a, a+n);
        sinh(0, 0, x);
        if(flag == 1) {
            cout << v.size() << " ";
            for(int i = 0; i < v.size(); i++) {
                cout << v[i] << " ";
            }
            cout << endl;
        } else cout << -1 << endl;
        flag = 0;
        v.clear();
    }
    return 0;
}

