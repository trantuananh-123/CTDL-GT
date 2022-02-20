#include<iostream>
#include<cstring>
#include<queue>
#include<vector>

using namespace std;

int n, m, q, u, v, x, y, flag[10000];
vector<int> a[1000];

void BFS(int u, int v) {
    queue<int> q;
    q.push(u);
    flag[u] = 1;
    while(!q.empty()) {
        int s = q.front();
        q.pop();
        if (s == v) {
            cout << "YES" << endl;
            return;
        }
        for (int i = 0; i < a[s].size(); i++) {
            if (flag[a[s][i]] == 0) {
                flag[a[s][i]] = 1;
                q.push(a[s][i]);
            }
        }
    }
    cout << "NO" << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        cin >> n >> m;
        memset(a, 0, sizeof(a));
        for(int i = 1; i <= m; i++) {
            cin >> x >> y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        cin >> q;
        for(int i = 1; i <= q; i++) {
            memset(flag, 0, sizeof(flag));
            cin >> u >> v;
            BFS(u, v);
        }
    }
    return 0;
}
