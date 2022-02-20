#include<iostream>
#include<algorithm>

using namespace std;

int n, s, a[10000], flag, b[10000], flag1[1000], kq[1000];

void in(int i) {
    cout << "[";
    for(int j = 0; j <= i; j++) {
        cout << a[b[j]];
        if(j != i) cout << " ";
    }
    cout << "]";
}

void sinh(int i) {
    for(int j = 0; j < n; j++) {
        if(a[j] <= s && j >= b[i-1]) {
            s -= a[j];
            b[i] = j;
            if(s == 0) {
                flag = 1;
                in(i);

            } else {
                sinh(i+1);
            }
            b[i] = 0;
            s += a[j];
        }
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        cin >> n >> s;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            kq[i] = 0;
        }
        sort(a, a+n);
        sinh(0);
        if(flag == 1) cout << endl;
        else cout << -1 << endl;
        flag = 0;
    }
    return 0;
}
