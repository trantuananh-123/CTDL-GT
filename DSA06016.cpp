#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        long long a[n], b[m];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < m; i++){
            cin >> b[i];
        }
        sort(a, a+n, greater<int>());
        sort(b, b+m);
        long long s = a[0] * b[0];
        cout << s << endl;
    }
    return 0;
}
