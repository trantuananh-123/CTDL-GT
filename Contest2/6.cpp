#include<iostream>

using namespace std;

int a[100000], n;

int binSearch(int a[], int l, int r, int x) {
    if(l <= r) {
        int m = (l+r)/2;
        if(a[m] == x && a[m-1] != x) {
            return m;
        }
        if(a[m] != x) {
            return binSearch(a, m+1, r, x);
        } else {
            return binSearch(a, l, m-1, x);
        }
    }
    return -1;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        cin >> n;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int m = binSearch(a, 0, n-1, 1);
        (m == -1) ? (cout << n << endl) : (cout << m << endl);
    }
    return 0;
}
