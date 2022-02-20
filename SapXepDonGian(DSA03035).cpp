#include<iostream>
#include<utility>
#include<algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n], dem[n]= {0}, m = 0, kq = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++) {
        dem[a[i]] = 1;
        dem[a[i]] = dem[a[i] - 1] + 1;
        kq = max(kq, dem[a[i]]);
    }
    cout << n - kq;
    return 0;
}
