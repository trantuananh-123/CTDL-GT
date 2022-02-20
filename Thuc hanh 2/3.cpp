#include<iostream>
#include<stack>
#include<cstring>

using namespace std;

int main() {

    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        stack<char> st, st1;
        int i = 0, j = s.size()-1;
        while(i <= j) {
            if(s[i] == s[j]) {
                st.push(s[i]);
                i++;
                j--;
            } else {
                j--;
            }
        }
        i = 0, j = s.size()-1;
        while(i <= j) {
            if(s[i] == s[j]) {
                st1.push(s[i]);
                i++;
                j--;
            } else {
                i++;
            }
        }
        cout << max(st.size(), st1.size())*2 - 1 << endl;
    }

    return 0;
}

