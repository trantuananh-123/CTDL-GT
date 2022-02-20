#include<iostream>
#include<vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int s, n = 0;
        vector<int> a;
        cin >> s;
        while(s > 0) {
            if(s % 7 == 0) {
                a.push_back(7);
                s -= 7;
            } else {
                a.push_back(4);
                s -= 4;
            }
        }
        if(s < 0) {
            cout << -1 << endl;
        } else {
            for(int i = 0; i < a.size(); i++) {
                cout << a[i];
            }
            cout << endl;
        }
    }
    return 0;
}
