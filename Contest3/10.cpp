#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        int a[n], dem = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(x == a[i]) dem++;
        }
        (dem == 0) ? (cout << -1 << endl) : (cout << dem << endl);
    }
    return 0;
}
