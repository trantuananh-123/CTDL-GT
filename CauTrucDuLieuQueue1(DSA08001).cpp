#include<iostream>
#include<queue>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        queue<int> q;
        int n, x, y;
        cin >> n;
        while(n--) {
            cin >> x;
            switch(x) {
            case 1:
                cout << q.size() << endl;
                break;
            case 2:
                (q.empty()) ? (cout << "YES" << endl) : (cout << "NO" << endl);
                break;
            case 3:
                cin >> y;
                q.push(y);
                break;
            case 4:
                if(!q.empty()) {
                    q.pop();
                }
                break;
            case 5:
                (!q.empty()) ? (cout << q.front() << endl) : (cout << -1 << endl);
                break;
            case 6:
                (!q.empty()) ? (cout << q.back() << endl) : (cout << -1 << endl);
                break;
            }
        }
    }
    return 0;
}
