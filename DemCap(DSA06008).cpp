#include<iostream>
#include<cmath>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m, dem = 0;
        cin >> n >> m;
        int a[n], b[m];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for(int i = 0; i < m; i++) {
            cin >> b[i];
        }
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(pow(a[i], b[j]) > pow(b[j], a[i])) dem++;
            }
        }
        cout << dem << endl;
    }
    return 0;
}
