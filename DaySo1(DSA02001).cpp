#include<iostream>

using namespace std;

int a[1000];

void triSum(int n){
    string s = "";
    if(n == 0) return;
    s += "[";
    cout << "[";
    for(int i = 0; i < n-1; i++){
        cout << a[i] << " ";
        s += to_string(a[i]) + " ";
    }
    s += to_string(a[n-1]) + "]";
    cout << a[n-1] << "]" << endl;
    for(int i = 0; i < n-1; i++){
        a[i] = a[i] + a[i+1];
    }
    cout << s << endl;
    triSum(n-1);
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        triSum(n);
    }
    return 0;
}
