#include<iostream>
#include<vector>

using namespace std;

int a[1000];
vector<string> v;

void triSum(int n, int k){
    string s = "";
    if(n == 0) return;
    s += "[";
    for(int i = 0; i < n-1; i++){
        s += to_string(a[i]) + " ";
    }
    s += to_string(a[n-1]) + "]";
    for(int i = 0; i < n-1; i++){
        a[i] = a[i] + a[i+1];
    }
    v.push_back(s);
    triSum(n-1, k);
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n;
        k = n;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        triSum(n, k);
        for(int i = v.size()-1; i >= 0; i--){
            cout << v[i];
        }
        cout << endl;
        v.clear();
    }
    return 0;
}
