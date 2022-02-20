#include<iostream>

using namespace std;

int n, k, s, a[100], b[100], flag[100], dem;

void dequyTapHop(int i) {
    for(int j = 0; j < n; j++) {
        if(a[j] <= s && flag[j] == 0 && j >= b[i-1]) {
            s -= a[j];
            b[i] = j;
            flag[j] = 1;
            if(s == 0 && i == k-1) {
                dem++;
            } else {
                dequyTapHop(i+1);
            }
            s += a[j];
            b[i] = 0;
            flag[j] = 0;
        }
    }
}

int main() {
    while(1) {
        cin >> n >> k >> s;
        if(n == 0 && k == 0 && s == 0) break;
        else {
            dem = 0;
            for(int i = 0; i < n; i++) {
                a[i] = i+1;
            }
            dequyTapHop(0);
            cout << dem << endl;
        }
}
return 0;
}
