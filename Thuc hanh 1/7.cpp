#include<iostream>
#include<climits>
#include<cmath>

using namespace std;

int a[9][9], b[100], hang[100], cot[100], cheox[100], cheon[100], m;

void dequyHau(int i) {
    for(int j = 1; j <= 8; j++) {
        if(!hang[i] && !cot[j] && !cheox[i+j-1] && !cheon[i-j+8]) {
            b[i] = j;
            hang[i] = 1;
            cot[j] = 1;
            cheox[i+j-1] = 1;
            cheon[i-j+8] = 1;
            if(i == 8) {
                int s = 0;
                for(int k = 1; k <= 8; k++) {
                    s += a[k][b[k]];
                    m = max(m, s);
                }
            } else {
                dequyHau(i+1);
            }
            hang[i] = 0;
            cot[j] = 0;
            cheox[i+j-1] = 0;
            cheon[i-j+8] = 0;
        }
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        m = INT_MIN;
        for(int i = 1; i <= 8; i++) {
            for(int j = 1; j <= 8; j++) {
                cin >> a[i][j];
            }
        }
        dequyHau(1);
        cout << m << endl;
    }
    return 0;
}
