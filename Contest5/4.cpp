#include<iostream>
#include<cstring>
#include<utility>
#include<algorithm>

using namespace std;

int a[1000][1000], n, m, q, u, v, x, y, flag[100000], e[100000];
pair<int, int> p[1000];

void DFS(int u) {
//    cout << u << endl;
    flag[u] = 1;
    for(int v = 1; v <= n; v++) {
        if(flag[v] == 0 && a[u][v] == 1) {
            e[v] = u;
            DFS(v);
        }
    }
}

void treeDFS(int u) {
    int k = 0;
    for(int v = 1; v <= n; v++) {
        flag[v] = 0;
    }
    DFS(u);
    int dem = 0;
    for(int v = 1; v <= n; v++) {
        if(flag[v] == 1) dem++;
    }
    if(dem == n) {
        for(int v = 1; v <= n; v++) {
            p[k].second = v;
            p[k].first = e[v];
            k++;
//            if(e[v] != 0) cout << e[v] << " " << v << endl;
        }
        sort(p, p+k);
        for(int v = 0; v < k; v++) {
           if(p[v].first != 0) cout << p[v].first << " " << p[v].second << endl;
        }
    } else {
        cout << -1 << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        cin >> n >> m >> u;
        memset(a, 0, sizeof(a));
        memset(flag, 0, sizeof(flag));
        memset(e, 0, sizeof(e));
        for(int i = 1; i <= m; i++) {
            cin >> x >> y;
            a[x][y] = 1;
            a[y][x] = 1;
        }
        treeDFS(u);
    }
    return 0;
}
//1   2
//2   4
//4   3
//4   5
//5   6
