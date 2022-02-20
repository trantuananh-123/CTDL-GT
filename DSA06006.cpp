#include<iostream>
#include<algorithm>

using namespace std;

void qsort(int a[], int l, int r){
    int i = l, j = r;
    int mid = a[(l+r)/2];
    while(i <= j){
        while(a[i] < mid) i++;
        while(a[j] > mid) j--;
        if(i <= j){
            swap(a[i], a[j]);
            i++; j--;
        }
    }
    if(l < j) qsort(a, l, j);
    if(r > i) qsort(a, i, r);
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        qsort(a, 0, n-1);
        for(int i = 0; i < n; i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
