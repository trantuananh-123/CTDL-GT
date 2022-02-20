#include<iostream>

using namespace std;

int n, m, dem, a[100][100];

void dequyDuongDiMT(int i, int j) {
    if(i == n-1 && j == m-1) dem++;
    if(i < n - 1) {
        dequyDuongDiMT(i+1, j);
    }
    if(j < m - 1) {
        dequyDuongDiMT(i, j+1);
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        cin >> n >> m;
        dem = 0;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }
        dequyDuongDiMT(0, 0);
        cout << dem << endl;
    }
    return 0;
}
