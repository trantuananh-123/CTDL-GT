#include<iostream>
#include<climits>

using namespace std;

int n, a[100][100], flag[10000], x[10000], amin = INT_MAX, m = INT_MAX, s;

void dequyDuLich(int i){
    for(int j = 2; j <= n; j++){
        if(!flag[j]){
            x[i] = j;
            s += a[x[i-1]][j];
            flag[j] = 1;
            if(i == n){
                if(s + a[j][1] < m) m = s + a[j][1];
            }
            else if(i < n && s + amin*(n-i+1) < m) dequyDuLich(i+1);
            s -= a[x[i-1]][j];
            flag[j] = 0;
        }
    }
}

int main(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
            if(amin > a[i][j]) amin = a[i][j];
        }
    }
    x[1] = 1;
    dequyDuLich(2);
    cout << m;
    return 0;
}
