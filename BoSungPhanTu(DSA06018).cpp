#include<iostream>
#include<set>
#include<climits>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int n, l = INT_MAX, r = INT_MIN;
        cin >> n;
        int a[n];
        set<int> s;
        set<int>:: iterator it;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            if(r <= a[i]) r = a[i];
            if(l >= a[i]) l = a[i];
            s.insert(a[i]);
        }
        set<int> kq;
        for(int i = l; i <= r; i++) {
            kq.insert(i);
        }
        cout << kq.size() - s.size() << endl;
    }
    return 0;
}
