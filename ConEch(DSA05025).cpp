#include<iostream>

using namespace std;

long long conEch(int n) {
    long long a[n+1]= {1, 1, 2};
    for(int i = 3; i <= n; i++) {
        a[i] = a[i-1] + a[i-2] + a[i-3];
    }
    return a[n];
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        cout << conEch(n) << endl;
    }
    return 0;
}
