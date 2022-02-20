#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>

using namespace std;

bool check(string s){
    for(int i = 0; i < s.size()-1; i++){
        if(s[i] == 'H' && s[i+1] == s[i]){
            return false;
        }
    }
    return true;
}


int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s = "";
        vector<string> v;
        int a[n+1];
        for(int i = 1; i <= n; i++){
            a[i] = 'H';
            s += a[i];
        }
        bool flag = true;
        while(flag){
            s = "";
            int m = n;
            while(a[m] == 'A' && m > 0){
                a[m] = 'H';
                m--;
            }
            if(m == 0) flag = false;
            else {
                a[m] = 'A';
                for(int j = 1; j <= n; j++){
                    s += a[j];
                }
                if(s[0] == 'H' && s[s.size() - 1] == 'A' && check(s)){
                    v.push_back(s);
                }
            }
        }
        sort(v.begin(), v.end());
        for(int i = 0; i < v.size(); i++){
            cout << v[i] << endl;
        }
//        cout << endl;
    }
    return 0;
}
