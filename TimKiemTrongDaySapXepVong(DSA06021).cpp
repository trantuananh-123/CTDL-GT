#include<iostream>
#include<algorithm>
#include<utility>

using namespace std;

int binarySearch(pair<int, int> p[], int l, int r, int x) {
    if(l <= r) {
        int m = (l+r)/2;
        if(p[m].first == x) return p[m].second + 1;
        if(p[m].first > x) return binarySearch(p, l, m-1, x);
        if(p[m].first < x) return binarySearch(p, m+1, r, x);
    }
    return -1;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, x, m = 0;
        cin >> n >> x;
        int a[n];
        pair<int, int> p[n];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            p[i].first = a[i];
            p[i].second = i;
        }
        sort(p, p+n);
        cout << binarySearch(p, 0, n-1, x) << endl;
    }
    return 0;
}
