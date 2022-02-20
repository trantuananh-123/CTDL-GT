#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n], b[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
            b[i] = a[i];
        }
        sort(a, a+n);
        int i = 0, j = n-1;
        while(i <= j){
            while(b[i] == a[i]) i++;
            while(b[j] == a[j]) j--;
            break;
        }
        cout << i+1 << " " << j+1 << endl;
    }
    return 0;
}
