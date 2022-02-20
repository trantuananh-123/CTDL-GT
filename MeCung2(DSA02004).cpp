#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int n, a[100][100], flag[100][100], flag1;
string s;
vector<string> v;

void in(int k) {
    string kq = "";
    for(int i = 0; i < k; i++) {
        kq += s[i];
    }
    v.push_back(kq);
}

void dequyMeCung(int i, int j, int k) {
    if(i == n-1 && j == n-1) {
        in(k);
        flag1 = 1;
    } else {
        if(a[i+1][j] == 1 && flag[i+1][j] == 0 && i != n-1) {
            s[k] = 'D';
            flag[i][j] = 1;
            dequyMeCung(i+1, j, k+1);
            flag[i][j] = 0;
        }
        if(a[i][j-1] == 1 && flag[i][j-1] == 0 && j != 0) {
            s[k] = 'L';
            flag[i][j] = 1;
            dequyMeCung(i, j-1, k+1);
            flag[i][j] = 0;
        }
        if(a[i][j+1] == 1 && flag[i][j+1] == 0 && j != n-1) {
            s[k] = 'R';
            flag[i][j] = 1;
            dequyMeCung(i, j+1, k+1);
            flag[i][j] = 0;
        }
        if(a[i-1][j] == 1 && flag[i-1][j] == 0 && i != 0) {
            s[k] = 'U';
            flag[i][j] = 1;
            dequyMeCung(i-1, j, k+1);
            flag[i][j] = 0;
        }
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        v.clear();
        cin >> n;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cin >> a[i][j];
                flag[i][j] = 0;
            }
        }
        flag[0][0] = 1;
        if(a[0][0] == 0) cout << -1;
        else {
            dequyMeCung(0, 0, 0);
            if(flag1 == 0) {
                cout << -1;
            } else {
                sort(v.begin(), v.end());
                for(int i = 0; i < v.size(); i++){
                    cout << v[i] << " ";
                }
            }
        }
        flag1 = 0;
        cout << endl;
    }
    return 0;
}
