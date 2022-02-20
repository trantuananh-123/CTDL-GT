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
                stringstream x1(x);
                st.pop();
                string y = st.top();
                stringstream y1(y);
                st.pop();
                x1 >> a;
                y1 >> b;
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
                string x;
                char c = s[i];
                stringstream ss;
                ss << c;
                ss >> x;
                st.push(x);
            }
        }
        string x = st.top();
        cout << st.top() << endl;
    }
    return 0;
}
