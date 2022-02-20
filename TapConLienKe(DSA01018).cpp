#include<iostream>

using namespace std;

int n, k, a[1000];

void prevGen() {
    int i = k;
    while(i > 1 && a[i] == a[i-1]+1) {
        a[i] = n-k+i;
        i--;
    }
    a[i]--;
    for(int j = 1; j <= k; j++){
        cout << a[j] << " ";
    }
    cout << endl;
}

bool sorted(){
    int i = 1;
    while(i <= k){
        if(a[i] != i) return false;
        i++;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        cin >> n >> k;
        for(int i = 1; i <= k; i++) {
            cin >> a[i];
        }
        if(sorted()) {
            for(int i = 1; i <= k; i++) {
                cout << n-k+i << " ";
            }
            cout << endl;
        } else {
            prevGen();
        }
    }
    return 0;
}
