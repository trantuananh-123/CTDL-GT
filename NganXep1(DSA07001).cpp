#include<iostream>
#include<stack>
#include<vector>

using namespace std;

int main() {
    string s;
    stack<int> st;
    vector<int> v;
    while(cin >> s) {
        if(s == "push") {
            int x;
            cin >> x;
            st.push(x);
        }
        if(s == "pop") {
            st.pop();
        }
        if(s == "show") {
            stack<int> tmp(st);
            if(st.empty()) {
                cout << "empty" << endl;
            } else {
                while(!tmp.empty()) {
                    v.push_back(tmp.top());
                    tmp.pop();
                }
                for(int i = v.size()-1; i >= 0; i--) {
                    cout << v[i] << " ";
                }
                v.clear();
            }
            cout << endl;
        }
    }
    return 0;
}
