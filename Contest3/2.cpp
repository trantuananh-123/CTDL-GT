#include<iostream>
#define m 1000000007
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        if(k > n-k) k = n-k;
        long long a[k+1]= {1, 0};
        for(int i = 1; i <= n; i++) {
            for(int j = min(i, k); j > 0; j--) {
                a[j] = (a[j] % m + a[j-1] % m) % m;
            }
        }
        cout << a[k] << endl;
    }
    return 0;
}
