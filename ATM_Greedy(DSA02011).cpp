#include<iostream>
#include<algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n, s, dem = 0;
        cin >> n >> s;
        int a[n];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a, a+n, greater<int>());
        int i = 0;
        while(i < n) {
            if(a[i] <= s) {
                dem++;
                s -= a[i];
            }
            if(s == 0) break;
            else i++;
        }
        (dem == 0) ? (cout << -1 << endl) : (cout << dem << endl);
    }
    return 0;
}
