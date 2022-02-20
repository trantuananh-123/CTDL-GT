#include<iostream>
#include<queue>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        long long s = 0;
        priority_queue<int, vector<int>, greater<int>> pq;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            pq.push(a[i]);
        }
        while(pq.size() > 1) {
            long long a = pq.top();
            pq.pop();
            long long b = pq.top();
            pq.pop();
            s += a+b;
            pq.push(a+b);
        }
        cout << s << endl;
    }
    return 0;
}
