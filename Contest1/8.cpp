#include<iostream>
#include<algorithm>
#include<climits>

using namespace std;

int n, s, a[10000], dem, flag[10000], flag1, m = INT_MAX;

void dequyTong(int i) {
    for(int j = 0; j < n; j++) {
        if(a[j] <= s && flag[j] == 0) {
            s -= a[j];
            flag[j] = 1;
            if(s == 0) {
                if(m > i+1) m = i+1;
                flag1 = 1;
            } else {
                dequyTong(i+1);
            }
            s += a[j];
        }
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        m = INT_MAX;
        cin >> n >> s;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            flag[i] = 0;
        }
        dem = 0;
        flag1 = 0;
        sort(a, a+n, greater<int>());
        dequyTong(0);
        if(flag1 == 0) cout << -1;
        else cout << m;
        cout << endl;
    }
    return 0;
}

