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
        int sum = 0, a, b;
        for(int i = s.size()-1; i >= 0; i--) {
            if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '%') {
                string x = st.top();
                stringstream temp1(x);
                st.pop();
                string y = st.top();
                stringstream temp2(y);
                st.pop();
                temp1 >> a;
                temp2 >> b;
                if(s[i] == '+') {
                    sum = a + b;
                } else if(s[i] == '-') {
                    sum = a - b;
                } else if(s[i] == '*') {
                    sum = a * b;
                } else if(s[i] == '/') {
                    sum = a / b;
                } else if(s[i] == '%') {
                    sum = a % b;
                }
                st.push(to_string(sum));
            } else {
                st.push(string(1, s[i]));
            }
        }
        cout << st.top() << endl;
    }
    return 0;
}
