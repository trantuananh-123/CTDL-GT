#include<iostream>
#include<vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, x, y, ok = 1;
        cin >> n;
        int flag[10000]= {0};
        for(int i = 1; i <= n-1; i++) {
            cin >> x >> y;
            if(flag[x] == 1 && flag[y] == 1) {
                ok = 0;
            } else {
                flag[x] = 1;
                flag[y] = 1;
            }
        }
        (ok == 1) ? (cout << "YES" << endl) : (cout << "NO" << endl);
    }
    return 0;
}
