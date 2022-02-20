#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, s, m;
        cin >> n >> s >> m;
        int d = s-s/7;
        if(n < m || m*s > d*n) cout << -1 << endl;
        else{
            for(int i = 1; i <= d; i++){
                if(n*i >= s*m){
                    cout << i << endl;
                    break;
                }
            }
        }
    }
    return 0;
}
