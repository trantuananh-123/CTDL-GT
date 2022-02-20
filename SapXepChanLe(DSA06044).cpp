#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
    int t;
    int n;
    cin >> n;
    int a[n];
    vector<int> v1, v2;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if((i+1) % 2 != 0) v1.push_back(a[i]);
        else v2.push_back(a[i]);
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end(), greater<int>());
    int k = max(v1.size(), v2.size());
    for(int i = 0, j = 0; i < k, j < k; i++, j++) {
        if(i < v1.size()) cout << v1[i] << " ";
        if(j < v2.size()) cout << v2[j] << " ";
    }
    cout << endl;
    return 0;
}
