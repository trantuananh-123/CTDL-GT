#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<climits>

using namespace std;

struct s {
    int j, d, p;
};

bool cmp(s a, s b) {
    return a.p > b.p;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, j, d, p, m = 0, dem = 0;
        cin >> n;

        vector<s> v;
        priority_queue<int> kq[1005];
        int flag[1000];
        for(int i = 1; i <= n; i++) {
            cin >> j >> d >> p;
            v.push_back({j, d, p});
        }
        sort(v.begin(), v.end(), cmp);
        for(int i = 0; i < v.size(); i++) {
            kq[v[i].d].push(v[i].p);
        }
        for(int i = 0; i < v.size(); i++) {
            if(v[i].d > dem) {
                m += kq[v[i].d].top();
                kq[v[i].d].pop();
                dem++;
            }
        }
        cout << dem << " " << m << endl;
    }
    return 0;
}
