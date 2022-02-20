#include<iostream>
#include<sstream>
#include<cstring>
#include<algorithm>
#define m 1000000007

using namespace std;

long long exp(long long x, long long n){
    if(n == 1) return x;
    long long t = exp(x, n/2);
    if(n % 2 == 0) return t % m * t % m;
    return t % m * t % m * x % m;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long long x, x1;
        string s;
        cin >> s;
        stringstream ss(s);
        ss >> x;
        reverse(s.begin(), s.end());
        stringstream ss1(s);
        ss1 >> x1;
        cout << exp(x, x1) << endl;
    }
    return 0;
}
