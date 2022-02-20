#include<iostream>
#include<queue>

using namespace std;

int main() {
    int n, x;
    string s;
    queue<int> q;
    cin >> n;
    while(n--) {
        cin >> s;
        if(s == "PUSH") {
            cin >> x;
            q.push(x);
        } else if(s == "PRINTFRONT") {
            (!q.empty()) ? (cout << q.front() << endl) : (cout << "NONE" << endl);
        } else if(s == "POP") {
            if(!q.empty()) q.pop();
        }
    }
    return 0;
}

