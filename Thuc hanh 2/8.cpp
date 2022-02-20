#include<iostream>
#include<stack>
#include<cstring>
#include<sstream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        stack<string> st;
        long long sum = 0, a = 0, b = 0;
        for(int i = s.size()-1; i >= 0; i--) {
            if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '%') {
                string x = st.top();
                st.pop();
                string y = st.top();
                st.pop();
                x = x + y + s[i];
                st.push(x);
            } else {
                string x;
                char c = s[i];
                stringstream ss;
                ss << c;
                ss >> x;
                st.push(x);
            }
        }
        string x = st.top();
        cout << x << endl;
    }
    return 0;
}
