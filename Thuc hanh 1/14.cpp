#include<iostream>
#include<algorithm>

using namespace std;

long long a[10000000], b[10000000];

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n;
        cin >> n;
        for(long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        for(long long i = 0; i < n-1; i++) {
            cin >> b[i];
        }
        long long x = n-1;
        for(long long i = 0; i < n; i++){
            if(a[i] != b[i]){
                x = i+1;
                break;
            }
        }
        cout << x << endl;
    }
    return 0;
}
