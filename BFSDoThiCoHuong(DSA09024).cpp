#include<iostream>
#include<vector>
#include<queue>

using namespace std;

vector<int> vt[1005], vs(1005, 0);
queue<int> q;

void bfs(int u, queue<int> q, vector<int> vt[], vector<int> vs) {
    q.push(u);
    while(!q.empty()) {
        int v = q.front();
        cout << v << " ";
        vs[v] = 1;
        q.pop();
        for(int i = 0; i < vt[v].size(); i++) {
            if(vs[vt[v][i]] == 0) {
                q.push(vt[v][i]);
                vs[vt[v][i]] = 1;
            }
        }
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int v, e, u, x, y;
        cin >> v >> e >> u;
        vector<int> vt[1005], vs(1005, 0);
        queue<int> q;
        for(int i = 1; i <= e; i++) {
            cin >> x >> y;
            vt[x].push_back(y);
        }
        bfs(u, q, vt, vs);
        cout << endl;
    }
}
