#include<iostream>
#define m 123456789

using namespace std;

long long exp(int x, long long n){
    if(n == 1) return x;
    long long t = exp(x, n/2);
    if(n % 2 == 0) return t % m * t % m;
    return t % m * t % m * x % m;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        cout << exp(2, n-1) << endl;
    }
    return 0;
}
