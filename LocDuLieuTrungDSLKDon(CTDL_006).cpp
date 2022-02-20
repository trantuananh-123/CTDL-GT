#include<iostream>
#include<list>
#include<algorithm>

using namespace std;

int main ( ) {
    int n, x;
    cin >> n;
    int a[n], flag[100000]={0};
    list<int> l;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        l.push_back(a[i]);
    }
    l.unique();
    for(auto x = l.begin( ); x != l.end( ); x++)
        if(flag[*x] == 0) {
            cout<< *x << " ";
            flag[*x] = 1;
        }
    return 0;
}
