#include<iostream>
#include<algorithm>
#include<climits>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n, s = 0, kq = 0;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        kq = a[0] + a[1];
        for(int i = 0; i < n-1; i++){
            for(int j = i+1; j < n; j++){
                s = a[i] + a[j];
                if(abs(s) < abs(kq)){
                    kq = s;
                }
            }
        }
        cout << kq << endl;
    }
    return 0;
}
