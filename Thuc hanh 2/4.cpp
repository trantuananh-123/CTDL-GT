#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin>>n>>k;
        if(k>n) cout<<0<<endl;
        else
        {
            long long tich=1;
            for(int i=n; i>=n-k+1; i--) {
                tich = (tich%1000000007*i%1000000007)%1000000007;
            }
            cout<<tich<<endl;
        }
    }
    return 0;
}
