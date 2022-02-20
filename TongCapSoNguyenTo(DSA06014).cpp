#include<iostream>

using namespace std;

int m, n, c, d, a[1000000], flag=0;

void Try(int x, int y) {
    while(x <= y) {
        if(a[x] + a[y] > n) y--;
        if(a[x] + a[y] < n) x++;
        if(a[x] + a[y] == n) {
            flag = 1;
            c = a[x];
            d = a[y];
            break;
        }
    }
}

int main() {
    bool check[1000000];
    int t;
    cin >> t;
    while(t--) {
        cin >> n;
        for(int i = 2; i <= n; i++)
            check[i] = true;
        for(int i = 2; i <= n; i++) {
            for(int j = 2*i; j <= n; j += i)
                check[j] = false;
        }
        for(int i = 2; i <= n; i++)
            if(check[i]) a[m++] = i;
        Try(0, m-1);
        if(flag == 1) cout << c << " " << d << endl;
        else cout << -1 << endl;
        for(int i = 2; i <= n; i++)
            check[i] = true;
        for(int i = 0; i < m; i++)
            a[i] = 0;
        m = 0;
        flag = 0;
    }
    return 0;
}
