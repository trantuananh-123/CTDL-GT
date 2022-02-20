#include<iostream>

using namespace std;

int n, m, a[100][100], dem;

void dequyDuongdiMT(int i, int j){
    if(i == n-1 && j == m-1) dem++;
    if(i < n-1){
        dequyDuongdiMT(i+1, j);
    }
    if(j < m-1){
        dequyDuongdiMT(i, j+1);
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> m;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> a[i][j];
            }
        }
        dequyDuongdiMT(0, 0);
        cout << dem << endl;
        dem = 0;
    }
    return 0;
}
