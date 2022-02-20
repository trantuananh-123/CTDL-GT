#include<iostream>
#include<cstring>
#include<climits>
#include<cmath>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int dem[256]= {0}, m =INT_MIN;
        for(int i = 0; i < s.size(); i++) {
            dem[s[i]]++;
        }
        for(int i = 0; i < s.size(); i++) {
            m = max(m, dem[s[i]]);
        }
        (m <= (s.size()+1)/2) ? (cout << 1 << endl) : (cout << -1 << endl);
    }
    return 0;
}
