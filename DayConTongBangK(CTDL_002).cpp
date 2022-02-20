#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int n, k, a[10000],b[10000], flag[10000];
vector<string> v;

void in(int i) {
    string s = "";
    for(int j = 0; j <= i; j++) {
        s += to_string(a[b[j]]) + "                    ";
    }
    v.push_back(s);
}

void dequyTong(int i) {
    for(int j = 0; j < n; j++) {
        if(a[j] <= k && flag[j] == 0 && j >= b[i-1]) {
            k -= a[j];
            b[i] = j;
            flag[j] = 1;
            if(k == 0) {
                in(i);

            } else {
                dequyTong(i+1);
            }
            flag[j] = 0;
            b[i] = 0;
            k += a[j];
        }
    }
}

int main() {
    cin >> n >> k;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a+n);
    dequyTong(0);
    for(int i = v.size() - 1; i >= 0; i--){
        cout << v[i] << endl;
    }
    cout << v.size();
    return 0;
}
