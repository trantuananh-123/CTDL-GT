#include<iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, dem =0;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for(int i = 0; i < n; i++) {
            int m = i;
            for(int j = m; j < n; j++) {
                if(a[j] < a[m]) {
                    m = j;
                }
            }
            if(m != i){
                dem++;
                swap(a[i], a[m]);
            }
        }
        cout << dem << endl;
    }
    return 0;
}
