#include<iostream>
#include<climits>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n], dem[n], m = 0, kq = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    dem[0] = 1;
    for(int i = 1; i < n; i++) {
        m = 0;
        for(int j = 0; j < i; j++) {
            if(a[i] > a[j]) {
                m = max(dem[j], m);
            }
        }
        dem[i] = m+1;
        kq = max(kq, dem[i]);
    }
    cout << kq << endl;
    return 0;
}
