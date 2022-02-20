#include<iostream>

using namespace std;

void nhapmang(long long a[], int n) {
    for(int i = 0; i < n; i++)
        cin >> a[i];
}

long long a[1000000], b[1000000], c[1000000];

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n1, n2, n3, flag=0;
        cin >> n1 >> n2 >> n3;
        nhapmang(a, n1);
        nhapmang(b, n2);
        nhapmang(c, n3);
        int i=0, j=0, k=0;
        while(i < n1 && j < n2 && k < n3) {
            if(a[i] == b[j] && b[j] == c[k]) {
                flag = 1;
                cout << a[i] << " ";
                i++;
                j++;
                k++;
            } else if(a[i] < b[j]) i++;
            else if(b[j] < c[k]) j++;
            else k++;
        }
        if(flag == 0) cout << -1 << endl;
        cout << endl;
    }
    return 0;
}

