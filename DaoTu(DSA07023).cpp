#include<iostream>
#include<sstream>
#include<stack>

using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        stack<string> st;
        stringstream ss(s);
        while(ss.good()){
            string x;
            getline(ss, x, ' ');
            st.push(x);
        }
        while(!st.empty()){
            cout << st.top() << " ";
            st.pop();
        }
        cout << endl;
    }
    return 0;
}
