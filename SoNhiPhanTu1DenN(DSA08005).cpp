#include<iostream>
#include<deque>

using namespace std;

deque<int> dq;

void nhiPhan(int n) {
    int x;
    while(n != 0) {
        x = n % 2;
        dq.push_front(x);
        n /= 2;
    }
}
int main() {
    int t, n, x;
    cin >> t;
    while(t--) {
        cin >> n;
        for(int i = 1; i <= n; i++) {
            nhiPhan(i);
            for(int j = 0; j < dq.size(); j++) {
                cout << dq[j];
            }
            cout << " ";
            dq.clear();
        }
        cout << endl;
    }
    return 0;
}
