#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int n, k, flag[10000], b[10000];
vector<int> a;
vector<vector<int>> v;

void dequyTong(int i) {
    for(int j = 0; j < n; j++) {
        if(a[j] <= k && flag[j] == 0 && j >= b[i-1]) {
            k -= a[j];
            b[i] = j;
            flag[j] = 1;
            if(k == 0) {
                for(int k = 0; k < a.size(); k++) {
                    cout << a[b[k]] << " ";
                }
            } else {
                dequyTong(i+1);
            }
            k += a[j];
            b[i] = 0;
            flag[j] = 0;
        }
    }
}

int main() {
    int n, k;
    cin >> n >> k;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    dequyTong(0);
    return 0;
}
