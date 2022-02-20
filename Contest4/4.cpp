#include<iostream>
#include<cstring>
#include<stack>
#include<cmath>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        stack<long long> v;
        for(int i = 0; i < s.size(); i++) {
            if(!((s[i] >= '0' && s[i] <= '9'))) {
                long long x = v.top();
                v.pop();
                long long y = v.top();
                v.pop();
                long long a;
                if(s[i] == '+') a = x+y;
                else if(s[i] == '-') a = y-x;
                else if(s[i] == '*') a = x*y;
                else if(s[i] == '/') a = y/x;
                else if(s[i] == '%') a = y%x;
                else if(s[i] == '^') a = pow(y, x);
                v.push(a);
            } else {
                v.push(s[i] - '0');
            }
        }
        cout << v.top() << endl;
    }
    return 0;
}
