#include<iostream>
#include<algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, s = 0, s1 = 0, flag = 0;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            s += a[i];
        }
        sort(a, a+n);
        for(int i = n-1; i >= 0; i--) {
            s1 += a[i];
            s -= a[i];
            if(s == s1) {
                cout << "YES" << endl;
                flag = 1;
                break;
            }
        }
        if(!flag) cout << "NO" << endl;
    }
    return 0;
}
