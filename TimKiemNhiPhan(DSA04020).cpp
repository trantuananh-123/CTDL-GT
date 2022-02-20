#include<iostream>

using namespace std;

int binSearch(int a[], int l, int r, int k){
    if(r >= l){
        int mid = (l+r)/2;
        if(a[mid] == k) return mid+1;
        if(a[mid] < k) return binSearch(a, mid+1, r, k);
        if(a[mid] > k) return binSearch(a, l, mid-1, k);
    }
    return -1;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        (binSearch(a, 0, n-1, k) != -1) ? (cout << binSearch(a, 0, n-1, k) << endl) : (cout << "NO" << endl);
    }
    return 0;
}
