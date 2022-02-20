#include<iostream>

using namespace std;

int n, dem;
int a[10]= {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};

void dequyDoiTien(int i, int n) {
    if(n == 0 || i < 0) {
        return;
    }
    while(a[i] <= n) {
        n -= a[i];
        dem++;
    }
    dequyDoiTien(i-1, n);
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        cin >> n;
        dem = 0;
        dequyDoiTien(9, n);
        cout << dem << endl;
    }
}
