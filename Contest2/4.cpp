#include<iostream>
#include<map>
#include<utility>
#include<algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        pair<int, int> p[1000];
        int n, dem = 1;
        cin >> n;
        int a[n], b[n];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for(int i = 0; i < n; i++) {
            cin >> b[i];
        }
        for(int i = 0; i < n; i++) {
            p[i].first = b[i];
            p[i].second = a[i];
        }
        sort(p, p+n);
        int x = p[0].first;
        for(int i = 0; i < n; i++) {
            if(x <= p[i].second) {
                x = p[i].first;
                dem++;
            }
        }
        cout << dem << endl;
    }

}
