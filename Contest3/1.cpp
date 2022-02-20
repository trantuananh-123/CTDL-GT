#include<iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n], flag[n]= {0}, m = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++) {
        flag[i] = 1;
        for(int j = 0; j < i; j++) {
            if(a[j] < a[i]) {
                flag[i] = max(flag[i], flag[j]+1);
            }
        }
        m = max(m, flag[i]);
    }
    cout << m;
    return 0;
}
