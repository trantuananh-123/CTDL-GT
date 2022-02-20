#include<iostream>
#include<list>

using namespace std;

int main() {
    int n, x;
    cin >> n;
    int a[n];
    list<int> l;
    list<int>:: iterator it;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        l.push_back(a[i]);
    }
    cin >> x;
    l.remove(x);
    for(it = l.begin(); it != l.end(); it++){
        cout << *it << " ";
    }
    return 0;
}
