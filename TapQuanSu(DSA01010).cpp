#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k, dem = 0;
        cin >> n >> k;
        int a[k+1], b[k+1];
        for(int i = 1; i <= k; i++){
            cin >> a[i];
            b[i] = a[i];
        }
        int m = k;
        while(a[m] == n-k+m && m > 0) m--;
        if(m > 0){
            a[m]++;
            for(int i = m+1; i <= k; i++){
                a[i] = a[m] + i - m;
            }
            int i = 1, j = 1;
            while(i <= k && j <= k){
                if(a[i] < b[j]) i++;
                else if(a[i] > b[j]) j++;
                else {
                    dem++;
                    i++;
                    j++;
                }
            }
            cout << k - dem << endl;
        }
        else{
            cout << k << endl;
        }
    }
    return 0;
}
