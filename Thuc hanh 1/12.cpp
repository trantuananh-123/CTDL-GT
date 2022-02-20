#include<iostream>
#include<queue>
#include<cstring>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int k, dem[256]= {0}, flag[256]= {0};
        long long sum = 0;
        string s;
        cin >> k >> s;
        priority_queue<int> pq;
        for(int i = 0; i < s.size(); i++) {
            dem[s[i]]++;
        }
        for(int i = 0; i < s.size(); i++) {
            if(!flag[s[i]]) {
                pq.push(dem[s[i]]);
                flag[s[i]] = 1;
            }
        }
        while(k > 0) {
            int x = pq.top();
            pq.pop();
            x--;
            pq.push(x);
            k--;
        }
        while(!pq.empty()) {
            int x = pq.top();
            sum += (x * x);
            pq.pop();
        }
        cout << sum << endl;
    }
    return 0;
}
