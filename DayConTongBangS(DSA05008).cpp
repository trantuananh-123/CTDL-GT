#include<iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, s;
        cin >> n >> s;
        int a[n], d[n+1][s+1];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for(int i = 0; i < n+1; i++) {
            d[i][0] = 1;
        }
        for(int i = 1; i <= s; i++) {
            d[0][i] = 0;
        }
        for(int i = 1; i < n+1; i++) {
            for(int j = 1; j <= s; j++) {
                if(d[i-1][j]) {
                    d[i][j] = 1;
                } else {
                    if(a[i-1] > j) {
                        d[i][j] = 0;
                    } else {
                        d[i][j] = d[i-1][j-a[i-1]];
                    }
                }
            }
        }
        if(d[n][s] == 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
