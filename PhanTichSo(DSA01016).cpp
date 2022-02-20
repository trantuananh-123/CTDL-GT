#include<iostream>

using namespace std;

int n, a[1000], m, flag;

void print(){
    cout << "(";
    for(int i = 1; i <= m; i++){
        cout << a[i];
        if(i != m) cout << " ";
    }
    cout << ") ";
}

void gen(){
    int i = m;
    while(a[i] == 1 && i >= 1) i--;
    if(i == 0) flag = 1;
    else{
        a[i]--;
        int s = m - i + 1;
        int p = s/a[i];
        int q = s%a[i];
        m = i;
        if(p > 0){
            m += p;
            for(int j = i+1; j <= i+p; j++){
                a[j] = a[i];
            }
        }
        if(q > 0){
            m++;
            a[m] = q;
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        m = 1;
        a[m] = n;
        while(!flag){
            print();
            gen();
        }
        cout << endl;
        flag = 0;
    }
    return 0;
}
