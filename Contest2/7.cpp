#include<iostream>

using namespace std;

long long exp(int n, int k) {
    if(k == 1) return n;
    long long t = exp(n, k/2);
    if(k % 2 == 0) return t * t;
    return t * t * n;
}

long long doubleArray(int n, long long k) {
    if(k == exp(2, n-1)) {
        return n;
    }
    if(k < exp(2, n-1)) {
        return doubleArray(n-1, k);
    }
    return doubleArray(n-1, exp(2, n)-k);
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        long long k;
        cin >> n >> k;
        cout << doubleArray(n, k) << endl;
    }
}
