#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>

using namespace std;

bool cmp(pair<int, int> &a, pair<int, int> &b) {
    if(a.first == b.first) {
        return a.second < b.second;
    }
    return a.first > b.first;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n], dem[100000]= {0};
        vector<int> v[n];
        pair<int, int> p[n];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            dem[a[i]]++;
        }
        for(int i = 0; i < n; i++) {
            p[i].second = a[i];
            p[i].first = dem[a[i]];
        }
        sort(p, p+n, cmp);
        for(int i = 0; i < n; i++){
            cout << p[i].second << " ";
        }
        cout << endl;
    }
    return 0;
}
