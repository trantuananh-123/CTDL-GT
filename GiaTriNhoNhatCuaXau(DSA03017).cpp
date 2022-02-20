#include<iostream>
#include<queue>
#include<cstring>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        priority_queue<int> pq;
        long long s = 0;
        int k, dem[256]= {0}, flag[256]= {0};
        string S;
        cin >> k >> S;
        for(int i = 0; i < S.size(); i++) {
            dem[S[i]]++;
        }
        for(int i = 0; i < S.size(); i++) {
            if(flag[S[i]] == 0) {
                pq.push(dem[S[i]]);
                flag[S[i]] = 1;
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
            s += x*x;
            pq.pop();
        }
        cout << s << endl;
    }
    return 0;
}

