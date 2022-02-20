#include<iostream>

using namespace std;

int n, dem;
int a[10][10], b[100], hang[100], cot[100], cheox[100], cheon[100], m;

void dequyHau(int i) {
    for(int j = 1; j <= 8; j++) {
        if(!hang[j] && !cot[j] && !cheox[i+j-1] && !cheon[i-j+8]) {
            b[i] = j;
            hang[j] = true;
            cot[j] = true;
            cheox[i+j-1] = true;
            cheon[i-j+8] = true;
            if(i == 8) {
                int s = 0;
                for(int k = 1; k <= 8; k++){
                    s += a[k][b[k]];
                    if(m < s) m = s;
                }
            } else dequyHau(i+1);
            hang[j] = false;
            cot[j] = false;
            cheox[i+j-1] = false;
            cheon[i-j+8] = false;
        }
    }
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        for(int i = 1; i <= 8; i++){
            for(int j = 1; j <= 8; j++){
                cin >> a[i][j];
            }
        }
        m = 0;
        dequyHau(1);
        cout << m << endl;
    }
    return 0;
}

