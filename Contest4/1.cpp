#include<iostream>
#include<stack>
#include<vector>

using namespace std;

int main() {
    string s;
    stack<int> v;
    int x;
    vector<int> a;
    while(cin >> s) {
        if(s == "push") {
            cin >> x;
            v.push(x);
        } else if(s == "pop") {
            if(!v.empty()) {
                v.pop();
            }
        } else if(s == "show") {
            if(v.empty()) {
                cout << "empty" << endl;
            } else {
                stack<int> temp = v;
                while(!temp.empty()) {
                    a.push_back(temp.top());
                    temp.pop();
                }
                for(int i= a.size()-1; i >= 0; i--) {
                    cout << a[i]<<" ";
                }
                cout << endl;
                a.clear();
            }
        }
    }
    return 0;
}


