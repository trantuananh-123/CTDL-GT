#include<iostream>

using namespace std;

int k, m, n, b[100], hang[100], cot[100], cheox[100], cheon[100];
string s[100];
char a[3][3], x[9];

void print()
int main() {
    int t;
    cin >> t;
    while(t--) {
        cin >> k >> m >> n;
        for(int i = 0; i < k; i++) {
            cin >> s[i];
        }
        for(int i = 1; i <= m; i++) {
            for(int j = 1; j <= n; j++) {
                cin >> a[i][j];
                x[m++] = a[i][j];
            }
        }
    }
    return 0;
}
