#include<iostream>
#include<utility>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        pair<int, int> p[1005];
        for(int i = 0; i < 1005; i++) {
            p[i].first = 0;
            p[i].second = 0;
        }
        int v, e, x, y, flag = 0;
        cin >> v >> e;
        for(int i = 1; i <= e; i++) {
            cin >> x >> y;
            p[x].first++;
            p[y].second++;
        }
        for(int i = 1; i <= v; i++) {
            if(p[i].first != p[i].second) {
                flag = 1;
                break;
            }
        }
        (flag == 0) ? (cout << 1 << endl) : (cout << 0 << endl);
    }
    return 0;
}
