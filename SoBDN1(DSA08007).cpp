#include<iostream>
#include<queue>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n, dem = 0;
        cin>>n;
        queue<long long> q;
        q.push(1);
        while(!q.empty()) {
            dem++;
            long long x = q.front();
            if(x > n) {
                cout << dem - 1 << endl;
                break;
            }
            q.pop();
            q.push(x*10);
            q.push(x*10 + 1);
        }
    }
    return 0;
}
