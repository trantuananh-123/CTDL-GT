#include<iostream>

using namespace std;

int main() {
    int n, x = 0;
    cin >> n;
    int a[n+1][n+1]= {0};
    cin.ignore();
    string s;
    for(int i = 1; i <= n; i++) {
        getline(cin, s);
        for(int j = 0; j < s.size(); j++) {
            if(s[j] != ' ') {
                x = x*10 + (s[j] - '0');
            } else {
                a[i][x] = 1;
                a[x][i] = 1;
                x = 0;
            }
            if(j == s.size() - 1) {
                a[i][x] = 1;
                a[x][i] = 1;
                x = 0;
            }
        }
    }
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
