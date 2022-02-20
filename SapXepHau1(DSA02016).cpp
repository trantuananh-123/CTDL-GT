#include<iostream>

using namespace std;

int n, dem;
int hang[100], cot[100], cheox[100], cheon[100];

void dequyHau(int i) {
    for(int j = 1; j <= n; j++) {
        if(!hang[j] && !cot[j] && !cheox[i+j-1] && !cheon[i-j+n]) {
            hang[j] = true;
            cot[j] = true;
            cheox[i+j-1] = true;
            cheon[i-j+n] = true;
            if(i == n) {
                dem++;
            } else dequyHau(i+1);
            hang[j] = false;
            cot[j] = false;
            cheox[i+j-1] = false;
            cheon[i-j+n] = false;
        }
    }
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        cin >> n;
        dem = 0;
        dequyHau(1);
        cout << dem << endl;
    }
    return 0;
}
