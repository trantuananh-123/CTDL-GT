#include<iostream>
#include<queue>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        queue<int> q;
        for(int i = 1; i <= n; i++) {
            int x, k;
            cin >> x;
            switch(x) {
            case 1:
                cout << q.size() << endl;
                break;
            case 2:
                (q.empty()) ? (cout << "YES" << endl) : (cout << "NO" << endl);
                break;
            case 3:
                cin >> k;
                q.push(k);
                break;
            case 4:
                if(!q.empty()) {
                    q.pop();
                }
                break;
            case 5:
                (q.empty()) ? (cout << -1 << endl) : (cout << q.front() << endl);
                break;
            case 6:
                (q.empty()) ? (cout << -1 << endl) : (cout << q.back() << endl);
                break;
            }
        }
    }
    return 0;
}
