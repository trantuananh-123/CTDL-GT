#include<iostream>
#include<algorithm>
#define m 1000000007

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        long long s = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a, a+n);
        for(int i = 0; i < n; i++){
            s = ((a[i] % m) * (i % m) + s % m) % m;
        }
        cout << s << endl;
    }
    return 0;
}
