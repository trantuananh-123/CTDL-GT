#include<iostream>

using namespace std;

void merge(int a[], int l, int m, int r) {
    int i = m - l + 1;
    int j = r - m;
    int x[i], y[j];
    for(int k = 0; k < i; k++) {
        x[k] = a[l + k];
    }
    for(int k = 0; k < j; k++) {
        y[k] = a[m + k + 1];
    }
    int k = l, t = 0, n = 0;
    while(t < i && n < j) {
        if(x[t] <= y[n]) {
            a[k] = x[t];
            t++;
        } else {
            a[k] = y[n];
            n++;
        }
        k++;
    }
    while(t < i) {
        a[k] = x[t];
        t++;
        k++;
    }
    while(n < j) {
        a[k] = y[n];
        n++;
        k++;
    }
}

void mergeSort(int a[], int l, int r) {
    if(l >= r) {
        return;
    }
    int m = (r + l)/2;
    mergeSort(a, l, m);
    mergeSort(a, m + 1, r);
    merge(a, l, m, r);
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        mergeSort(a, 0, n-1);
        for(int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
