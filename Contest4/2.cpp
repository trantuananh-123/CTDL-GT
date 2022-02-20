#include<iostream>
#include<cstring>
#include<climits>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int n = s.size(), dem1 = 0, dem2 = 0, m = INT_MIN;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '(') {
                dem1++;
            } else {
                dem2++;
            }
            if(dem1 == dem2){
                m = max(m, dem1 + dem2);
            } else if(dem1 < dem2) {
                dem1 = 0;
                dem2 = 0;
            }
        }
        dem1 = 0;
        dem2 = 0;
        for(int i = s.size()-1; i >= 0; i--) {
            if(s[i] == '(') {
                dem1++;
            } else {
                dem2++;
            }
            if(dem1 == dem2){
                m = max(m, dem1 + dem2);
            } else if(dem1 > dem2) {
                dem1 = 0;
                dem2 = 0;
            }
        }
        cout << m << endl;
    }
    return 0;
}
