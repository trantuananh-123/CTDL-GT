#include<iostream>
#include<cstring>
#include<stack>

using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while(t--) {
        string s;
        getline(cin, s);
        stack<int> st;
        int dem = 1;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '(') {
                cout << dem << " ";
                st.push(dem);
                dem++;
            }
            if(s[i] == ')') {
                cout << st.top() << " ";
                st.pop();
            }
        }
        cout << endl;
    }
    return 0;
}
