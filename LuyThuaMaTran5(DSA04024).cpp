#include<iostream>
#define m 1000000007

using namespace std;

struct MaTran {
    long long f[10][10];
};

int n, k;

MaTran operator * (MaTran a, MaTran b) {
    MaTran c;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            c.f[i][j] = 0;
            for(int k = 0; k < n; k++) {
                c.f[i][j] = (c.f[i][j] % m + (a.f[i][k] * b.f[k][j]) % m) % m;
            }
        }
    }
    return c;
}

MaTran exp(MaTran a, int n) {
    if(n == 1) return a;
    MaTran t = exp(a, n/2);
    if(n % 2 == 0) return t * t;
    return a * t * t;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        cin >> n >> k;
        MaTran a, kq;
        long long sum = 0;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cin >> a.f[i][j];
            }
        }
        kq = exp(a, k);
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(i == n-1) sum = (sum % m + kq.f[i][j] % m) % m;
                else break;
            }
        }
        cout << sum << endl;
    }
    return 0;
}



