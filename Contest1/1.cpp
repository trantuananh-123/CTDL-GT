#include<iostream>
#include<cstring>
#include<vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m = 0, flag = 0;
        cin >> n;
        int a[n+1];
        string s = {""};
        vector<string> v;
        for(int i = 1; i <= n; i++) {
            a[i] = i;
            s += to_string(a[i]);
        }
        v.push_back(s);
        while(flag == 0) {
            s = "";
            int i = n-1;
            while(a[i] > a[i+1]) i--;
            if(i > 0) {
                int k = n;
                while(a[k] < a[i]) k--;
                swap(a[i], a[k]);
                int l = i+1, j = n;
                while(l <= j) {
                    swap(a[l], a[j]);
                    l++;
                    j--;
                }
                for(int i = 1; i <= n; i++) {
                    s += to_string(a[i]);
                }
                v.push_back(s);
            } else {
                flag = 1;
            }
        }
        for(int i = v.size()-1; i >= 0; i--) {
            cout << v[i] << " ";
        }
        cout << endl;
    }
}
