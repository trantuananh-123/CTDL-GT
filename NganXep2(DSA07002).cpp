#include<iostream>
#include<stack>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    stack<int> st;
    while(cin >> s) {
        if(s == "PUSH") {
            int x;
            cin >> x;
            st.push(x);
        }
        if(s == "POP") {
            if(!st.empty()) {
                st.pop();
            }
        }
        if(s == "PRINT") {
            if(!st.empty()) {
                cout << st.top() << endl;
            } else {
                cout << "NONE" << endl;
            }
        }
    }
    return 0;
}

