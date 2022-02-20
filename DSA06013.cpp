#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k, dem = 0;
        cin >> n >> k;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] == k) dem++;
        }
        (dem != 0) ? (cout << dem << endl) : (cout << -1 << endl);
    }
    return 0;
}
