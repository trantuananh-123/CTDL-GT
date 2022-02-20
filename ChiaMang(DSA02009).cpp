#include<iostream>
#include<algorithm>

using namespace std;

int n, k, x, s, dem;
int a[100000], flag[100000];
bool check;

void dequyMang(int x, int dem) {
    if(check) {
        return;
    }
    if(dem == k) {
        check = true;
        return;
    }
    for(int j = 0; j < n; j++) {
        if(flag[j] == 0) {
            flag[j] = 1;
            if(x == s) {
                dequyMang(0, dem+1);
            }
            if(x > s) {
                return;
            } else {
                dequyMang(x + a[j], dem);
            }
        }
        flag[j] = 0;
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        check = false;
        s = 0;
        dem = 0;
        cin >> n >> k;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            flag[i] = 0;
            s += a[i];
        }
        sort(a, a+n);
        if(s % k != 0) {
            cout << 0 << endl;
        } else {
            s = s/k;
            dequyMang(0, 0);
            (check == true) ? (cout << 1 << endl) : (cout << 0 << endl);
        }
    }
    return 0;
}
