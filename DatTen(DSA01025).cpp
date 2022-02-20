#include<iostream>

using namespace std;

int flag=0, a[10000], n, k;

void in() {
    for(int i = 65; i <= 65+k-1; i++)
        cout << (char)a[i];
    cout << endl;
}

void sinh() {
    int i=65+k-1;
    while(i > 64 && a[i] == n-k+i) i--;
    if(i == 64) flag = 1;
    else {
        a[i]++;
        int x = a[i];
        while(i <= 65+k-1) a[i++] = x++;
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        flag = 0;
        cin >> n >> k;
        for(int i = 65; i <= 65+k-1; i++) a[i] = i;
        while(flag == 0) {
            in();
            sinh();
        }
    }
    return 0;
}

