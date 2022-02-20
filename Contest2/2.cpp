#include<iostream>
#include<algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, flag = 0;
        cin >> n;
        int a[n], b[n];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b, b+n);
        for(int i = 0; i < n; i++) {
            if(!(a[i] == b[i]) && !(a[i] == b[n-i-1])) {
                flag = 1;
                break;
            }
        }
        (flag == 0) ? (cout << "Yes" << endl) : (cout << "No" << endl);
    }
    return 0;
}
