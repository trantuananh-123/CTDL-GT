#include<iostream>

using namespace std;

long long f[100];

char fibonacci(int n, long long k) {
    if(n == 1) return 'A';
    if(n == 2) return 'B';
    if(k <= f[n-2]) return fibonacci(n-2, k);
    return fibonacci(n-1, k-f[n-2]);
}

int main() {
    int t;
    cin >> t;
    f[0] = 0;
    f[1] = 1;
    for(int i = 2; i <= 100; i++) {
        f[i] = f[i-1] + f[i-2];
    }
    while(t--) {
        int n;
        long long k;
        cin >> n >> k;
        cout << fibonacci(n, k) << endl;
    }
    return 0;
}
