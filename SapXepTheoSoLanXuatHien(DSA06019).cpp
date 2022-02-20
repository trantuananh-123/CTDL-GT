#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>

using namespace std;

typedef pair<int, int> pairs;

bool cmp(const pair<int, int> &a, const pair<int, int> &b) {
    if(a.first == b.first) return a.second < b.second;
    return a.first > b.first;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n], dem[100000]= {0};
        vector<pair<int, int>> v;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            dem[a[i]]++;
        }
        for(int i = 0; i < n; i++) {
            v.push_back(make_pair(dem[a[i]], a[i]));
        }
        sort(v.begin(), v.end(), cmp);
        for(int i = 0; i < v.size(); i++) {
            cout << v[i].second << " ";
        }
        cout << endl;
    }
}
