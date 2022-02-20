#include<iostream>
#include<queue>
#include<vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        priority_queue<int, vector<int>, greater<int>> pq;
        int n;
        long long s = 0;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            pq.push(a[i]);
        }
        while(pq.size() > 1){
            long long x = pq.top();
            pq.pop();
            long long y = pq.top();
            pq.pop();
            s += (x + y);
            pq.push(x + y);
        }
        cout << s << endl;
    }
    return 0;
}
