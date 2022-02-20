#include<iostream>
#include<queue>
#include<cstring>

using namespace std;

int v, e, u, x, y;
int flag[1000], a[1000][1000];

void BFS(int u) {
    queue<int> s;
    s.push(u);
    flag[u] = 1;
    while(!s.empty()) {
        int x = s.front();
        cout << x << " ";
        s.pop();
        for(int i = 1; i <= v; i++) {
            if(a[x][i] == 1 && flag[i] == 0) {
                s.push(i);
                flag[i] = 1;
            }
        }
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        cin >> v >> e >> u;
        for(int i = 1; i <= v; i++){
            flag[i] = 0;
        }
        memset(a, 0, sizeof(a));
        for(int i = 1; i <= e; i++) {
            cin >> x >> y;
            a[x][y] = 1;
        }
        BFS(u);
        cout << endl;
    }
    return 0;
}
