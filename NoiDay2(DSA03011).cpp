#include<iostream>
#include<queue>
#include<vector>
#define m 1000000007

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n, s = 0;
        cin >> n;
        long long a[n];
        priority_queue<int, vector<int>, greater<int>> pq;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            pq.push(a[i] % m);
        }
        while(pq.size() > 1) {
            long long a = pq.top();
            pq.pop();
            long long b = pq.top();
            pq.pop();
            s = (s % m + (a % m + b % m) % m) % m;
            pq.push((a % m + b % m) % m);
        }
        cout << s << endl;
    }
    return 0;
}
