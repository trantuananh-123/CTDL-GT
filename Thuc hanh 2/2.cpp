#include<iostream>
#include<cstring>

using namespace std;

int b[1000][1000];

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, v;
        cin >> n >> v;
        int a[n], c[n];
        memset(b, 0, sizeof(b));
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for(int i = 0; i < n; i++) {
            cin >> c[i];
        }
        for(int i = 0; i <= v; i++) {
            b[0][i] = 0;
        }
        for(int i = 0; i <= n; i++) {
            b[i][0] = 0;
        }
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= v; j++) {
                if(j >= a[i-1]) {
                    b[i][j] = max(b[i-1][j], b[i-1][j-a[i-1]] + c[i-1]);
                } else {
                    b[i][j] = b[i-1][j];
                }
            }
        }
        cout << b[n][v] << endl;
    }
    return 0;
}
