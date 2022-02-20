#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>

using namespace std;

struct job {
    int jobId, deadline, profit;
};

bool cmp(job a, job b) {
    return a.profit > b.profit;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, jobId, deadline, profit, totalMax = 0, dem = 0;
        cin >> n;

        vector<job> v;
        priority_queue<int> kq[1005];
        int flag[1000];
        for(int i = 1; i <= n; i++) {
            cin >> jobId >> deadline >> profit;
            v.push_back({jobId, deadline, profit});
        }
        sort(v.begin(), v.end(), cmp);
        for(int i = 0; i < v.size(); i++) {
//            cout << v[i].deadline << " " << v[i].profit << endl;
            kq[v[i].deadline].push(v[i].profit);
        }
        for(int i = 0; i < v.size(); i++) {
            if(v[i].deadline > dem) {
                totalMax += kq[v[i].deadline].top();
                kq[v[i].deadline].pop();
                dem++;
            }
        }
        cout << dem << " " << totalMax << endl;
    }
    return 0;
}
