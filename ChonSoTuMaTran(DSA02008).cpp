#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int n, a[100][100], k, flagCot[100], flagHang[100], b[10000], dem;
vector<string> v;

void in(int i) {
    string s = "";
    for(int j = 0; j <= i; j++) {
        s += to_string(b[j]) + " ";
    }
    v.push_back(s);
}

void dequyChonSo(int i) {
    for(int j = 0; j < n; j++) {
        if(a[i][j] <= k && flagHang[i] == 0 && flagCot[j] == 0) {
            k -= a[i][j];
            flagHang[i] = 1;
            flagCot[j] = 1;
            b[i] = j+1;
            if(k == 0 && i == n-1) {
                in(i);
                dem++;
            } else {
                dequyChonSo(i+1);
            }
            k += a[i][j];
            flagHang[i] = 0;
            flagCot[j] = 0;
            b[i] = 0;
        }
    }
}


int main() {
    cin >> n >> k;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    dequyChonSo(0);
    cout << dem << endl;
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << endl;
    }
    return 0;
}

