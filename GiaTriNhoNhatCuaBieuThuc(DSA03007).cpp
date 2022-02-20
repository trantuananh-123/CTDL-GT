#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long a[n], b[n];
        long long s = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        sort(a, a+n);
        sort(b, b+n, greater<int>());
        for(int i = 0; i < n; i++){
            s += a[i] * b[i];
        }
        cout << s << endl;
    }
    return 0;
}
