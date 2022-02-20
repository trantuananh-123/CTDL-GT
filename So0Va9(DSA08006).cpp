#include<iostream>
#include<queue>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        queue<long long> q;
        q.push(9);
        while(!q.empty()) {
            int t = q.front();
            if(t % n == 0) {
                cout << t << endl;
                break;
            } else {
                q.pop();
                q.push(t*10);
                q.push(t*10 + 9);
            }
        }
    }
    return 0;
}
