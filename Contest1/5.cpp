#include<iostream>
#include<algorithm>

using namespace std;

int n, s, a[10000], b[10000], flag[10000], flag1;

void in(int i){
    cout << "[";
    for(int j = 0; j <= i; j++){
        cout << a[b[j]];
        if(j != i) cout << " ";
    }
    cout << "] ";
}

void dequyTong(int i) {
    for(int j = 0; j < n; j++) {
        if(a[j] <= s && flag[j] == 0 && j >= b[i-1]) {
            s -= a[j];
            b[i] = j;
            flag[j] = 1;
            if(s == 0) {
                in(i);
                flag1 = 1;
            } else {
                dequyTong(i+1);
            }
            s += a[j];
            b[i] = 0;
            flag[j] = 0;
        }
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        cin >> n >> s;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            flag[i] = 0;
            b[i] = 0;
        }
        flag1 = 0;
        sort(a, a+n);
        dequyTong(0);
        if(flag1 == 0) cout << -1;
        cout << endl;
    }
    return 0;
}
