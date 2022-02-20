#include<iostream>
#include<algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a, a+n);
        int i = 1, m = 0, flag = 0;
        while(i < n) {
            if(a[i] != a[0]) {
                flag = 1;
                m = i;
                break;
            } else if(a[i] == a[0]) {
                i++;
            }
        }
        (flag == 1) ? (cout << a[0] << " " << a[flag] << endl) : (cout << -1 << endl);
    }
    return 0;
}
