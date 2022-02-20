#include<iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n+1][n+1];
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cin >> a[i][j];
            if(a[i][j] == 1) {
                cout << j << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
