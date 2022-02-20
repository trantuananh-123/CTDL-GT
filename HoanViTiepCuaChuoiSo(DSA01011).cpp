#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        string s;
        cin >> n >> s;
        if(s.size() == 1) {
            cout << n << " " << "BIGGEST" << endl;
        } else {
            long long m = s.size()-2;
            long long k = s.size()-1;
            while(s[m] >= s[m+1]) m--;
            if(m >= 0) {
                while(s[k] <= s[m]) k--;
                swap(s[m], s[k]);
                reverse(s.begin()+m+1, s.begin()+s.size());
                cout << n << " " << s << endl;
            } else {
                cout << n << " " << "BIGGEST" << endl;
            }
        }
    }
    return 0;
}
