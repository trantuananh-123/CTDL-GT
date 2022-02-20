#include<iostream>
#include<deque>

using namespace std;

int main() {
    int n, x;
    deque<int> dq;
    string s;
    cin >> n;
    while(n--) {
        cin >> s;
        if(s == "PUSHFRONT") {
            cin >> x;
            dq.push_front(x);
        } else if(s == "PRINTFRONT") {
            (!dq.empty()) ? (cout << dq.front() << endl) : (cout << "NONE" << endl);
        } else if(s == "POPFRONT") {
            if(!dq.empty()) {
                dq.pop_front();
            }
        } else if(s == "PUSHBACK") {
            cin >> x;
            dq.push_back(x);
        } else if(s == "PRINTBACK") {
            (!dq.empty()) ? (cout << dq.back() << endl) : (cout << "NONE" << endl);
        } else if(s == "POPBACK") {
            if(!dq.empty()) {
                dq.pop_back();
            }
        }
    }
    return 0;
}
