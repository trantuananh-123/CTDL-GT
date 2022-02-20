#include<iostream>
#include<set>
#include<cstring>

using namespace std;

long long a[100000];

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s = "";
        set<char> kq;
        set<char>:: iterator it;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            s += to_string(a[i]);
        }
        cout << s;
        for(int i = 0; i < s.size(); i++){
            kq.insert((s[i]));
        }
        for(it = kq.begin(); it != kq.end(); it++){
            cout << *it << " ";
        }
        cout << endl;
    }
    return 0;
}
