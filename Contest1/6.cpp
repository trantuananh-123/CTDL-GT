#include<iostream>

using namespace std;

int n, dem, hang[100], cot[100], cheoXuoi[100], cheoNguoc[100];

void dequyHau(int i) {
    for(int j = 1; j <= n; j++) {
        if(!hang[j] && !cot[j] && !cheoXuoi[i+j-1] && !cheoNguoc[i-j+n]) {
            hang[j] = 1;
            cot[j] = 1;
            cheoXuoi[i+j-1] = 1;
            cheoNguoc[i-j+n] = 1;
            if(i == n) {
                dem++;
            } else {
                dequyHau(i+1);
            }
            hang[j] = 0;
            cot[j] = 0;
            cheoXuoi[i+j-1] = 0;
            cheoNguoc[i-j+n] = 0;
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
