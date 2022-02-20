#include<iostream>
#include<vector>
#include<stack>

using namespace std;

vector<int> vec[1005];
int flag[1005];

void dfs(int u) {
    int x, y;
    stack<int> st;
    st.push(u);
    cout << st.top() << " ";
    flag[u] = 1;
    while(!st.empty()) {
        x = st.top();
        st.pop();
        for(int i = 0; i < vec[x].size(); i++) {
            y = vec[x].at(i);
            if(!flag[y]) {
                cout << y << " ";
                flag[y] = 1;
                st.push(x);
                st.push(y);
                break;
            }
        }
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int v, e, u, x, y;
        cin >> v >> e >> u;
        for(int i = 1; i <= v; i++) {
            vec[i].clear();
            flag[i] = 0;
        }
        for(int i = 1; i <= e; i++) {
            cin >> x >> y;
            vec[x].push_back(y);
        }
        dfs(u);
    }
    return 0;
}
