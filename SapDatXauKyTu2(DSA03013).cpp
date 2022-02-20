#include<iostream>
#include<cstring>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        int d, dem[256]= {0}, m = 0;
        cin >> d;
        cin >> s;
        for(int i = 0; i < s.size(); i++) {
            dem[s[i]]++;
            if(m < dem[s[i]]) m = dem[s[i]];
        }
        (m*d <= s.size()+1) ? (cout << 1 << endl) : (cout << -1 << endl);
    }
    return 0;
}

