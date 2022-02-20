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
        int l = 0, r = 0;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '(') {
                l++;
            } else {
                if(l == 0) {
                    r++;
                } else {
                    l--;
                }
            }
        }
        int kq = l/2 + r/2;
        l %= 2;
        r %= 2;
        if(l > 0) {
            cout << kq + 2 << endl;
        } else cout << kq << endl;
    }
}

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
        stack<char> st;
        int l = 0, r = 0;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == ')' && !st.empty()) {
                if(st.top() == '(') {
                    st.pop();
                } else {
                    st.push(s[i]);
                }
            } else {
                st.push(s[i]);
            }
        }
        l = st.size();
        while(!st.empty() && st.top() == '(') {
            st.pop();
            r++;
        }
        cout << l/2 + r/2 << endl;
    }
    return 0;
}
