#include<iostream>
#include<climits>

using namespace std;

int n, m, a[100], flag;
long long kq = LONG_LONG_MAX;

void Try(int i) {
    for(int j = 0; j <= 1; j++) {
        a[i] = j;
        if(i == m) {
            long long s = 0;
            for(int k = 1; k <= m; k++) {
                s = s*10 + a[k];
            }
            s *= 9;
            if(s % n == 0 && s >= n) {
                kq = min(kq, s);
                flag = 1;
            }
        } else {
            Try(i+1);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        cin >> n;
        m = 1, flag = 0, kq = LONG_LONG_MAX;
        while(m <= 17 && !flag) {
            Try(1);
            m += 1;
        }
        cout << kq << endl;
    }
    return 0;
}
