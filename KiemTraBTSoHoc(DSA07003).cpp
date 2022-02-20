#include<iostream>
#include<stack>
#include<cstring>

using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while(t--) {
        string s;
        getline(cin, s);
        stack<char> st;
        int flag = 0;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] != ')') {
                st.push(s[i]);
            } else {
                flag = 0;
                while(st.top() != '(') {
                    if(st.top() == '+' || st.top() == '-' || st.top() == '*' || st.top() == '/' || st.top() == '%') {
                        flag = 1;
                    }
                    st.pop();
                }
                st.pop();
                if(flag == 0) {
                    cout << "Yes" << endl;
                    break;
                }
            }
        }
        if(flag == 1) cout << "No" << endl;
    }
    return 0;
}

