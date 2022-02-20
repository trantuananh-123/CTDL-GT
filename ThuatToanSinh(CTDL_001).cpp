#include<iostream>
#include<string.h>

using namespace std;

int a[100000], n, flag;

bool doiXung(int a[], int n) {
    long long s1 = 0, s2 = 0;
    for(int i = 0; i < n; i++) {
        s1 = s1*10 + a[i];
    }
    for(int i = n-1; i >= 0; i--) {
        s2 = s2*10 + a[i];
    }
    if(s1 != s2) return false;
    return true;
}

void in() {
    if(doiXung(a, n)) {
        for(int i = 0; i < n; i++) {
            cout << a[i] << "                      ";
        }
        cout << endl;
    }
}

void sinh() {
    int i = n-1;
    while(a[i] == 1) {
        a[i] = 0;
        i--;
    }
    if(i < 0) flag=1;
    else a[i] = 1;
}

int main() {
    cin >> n;
    flag = 0;
    while(!flag) {
        in();
        sinh();
    }
    return 0;
}
