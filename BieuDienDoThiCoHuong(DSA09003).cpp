#include<iostream>
#include<set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int v, e, x, y;
        cin >> v >> e;
        set<int> s[v+1];
        set<int>::iterator it;
        for(int i = 1; i <= e; i++) {
            cin >> x >> y;
            s[x].insert(y);
        }
        for(int i = 1; i <= v; i++) {
            cout << i << ": ";
            for(it = s[i].begin(); it != s[i].end(); it++) {
                cout << *it << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
