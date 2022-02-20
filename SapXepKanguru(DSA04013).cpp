#include<iostream>
#include<algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, dem1 = 0, dem2 = 0;
        cin >> n;
        int a[n], flag[n]= {0};
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            flag[i] = 0;
        }
        int m = n;
        sort(a, a+n);
        int i = n/2-1, j = n-1;
        while(i >= 0 && j >= n/2-1) {
            if(a[j] >= a[i]*2) {
                j--;
                i--;
                m--;
            } else {
                i--;
            }
        }
        cout << m << endl;
    }
    return 0;
}
