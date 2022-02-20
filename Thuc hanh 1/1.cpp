#include<iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        int a[n+1];
        for(int i = 1; i <= n; i++) {
            a[i] = 0;
        }
        bool flag = true;
        while(flag) {
            int m = n, dem = 0;
            string s = "";
            while(a[m] == 1 && m > 0) {
                a[m] = 0;
                m--;
            }
            if(m == 0) {
                flag = false;
            } else {
                a[m] = 1;
                for(int j = 1; j <= n; j++) {
                    s += (a[j] + '0');
                    if(a[j] == 1) dem++;
                }
                if(dem == k) cout << s << endl;
            }
        }
    }
    return 0;
}
