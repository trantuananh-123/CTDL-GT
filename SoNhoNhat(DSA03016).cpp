#include<iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int s, k;
        cin >> s >> k;
        if(s > 9*k) {
            cout << -1 << endl;
        } else {
            s -= 1;
            int a[k];
            for(int i = k-1; i > 0; i--) {
                if(s > 9) {
                    a[i] = 9;
                    s -= 9;
                } else {
                    a[i] = s;
                    s = 0;
                }
            }
            a[0] = s + 1;
            for(int i = 0; i < k; i++) {
                cout << a[i];
            }
            cout << endl;
        }
    }
    return 0;
}
