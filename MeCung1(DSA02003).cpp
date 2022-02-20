#include<iostream>
#include<cstring>

using namespace std;

int n, a[100][100], flag[100][100], kq;
string s;

void dequyMaze(int i, int j, int k) {
    if(i == n-1 && j == n-1) {
        for(int l = 0; l < k; l++) {
            cout << s[l];
        }
        cout << " ";
        kq = 1;
    } else {
        if(a[i+1][j] == 1 && flag[i+1][j] == 0 && i != n-1) {
            s[k] = 'D';
            flag[i+1][j] = 1;
            dequyMaze(i+1, j, k+1);
            flag[i+1][j] = 0;
        }
        if(a[i][j+1] == 1 && flag[i][j+1] == 0 && j != n-1) {
            s[k] = 'R';
            flag[i][j+1] = 1;
            dequyMaze(i, j+1, k+1);
            flag[i][j+1] = 0;
        }
    }
}
int main() {
    int t;
    cin >> t;
    while(t--) {
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
            dequyMaze(0, 0, 0);
            if(kq == 0) {
                cout << -1;
            }
        }
        kq = 0;
        cout << endl;
    }
}
