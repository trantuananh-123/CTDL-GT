#include<iostream>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, flag = 0;
        int f[100000]= {1, 0};
        cin >> n;
        int a[100000];
        long long sum = 0, sumLeft = 0;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }
        if(sum % 2 != 0) {
            cout << "NO" << endl;
        } else {
            sum /= 2;
            for(int i = 0; i < n; i++) {
                for(int j = sum; j >= a[i]; j--) {
                    if(f[j-a[i]] == 1) f[j] = 1;
                }
            }
            (f[sum] != 1)? (cout << "NO" << endl) : (cout << "YES" << endl);
        }
    }
    return 0;
}
