#include<iostream>
#include<set>

using namespace std;

int main() {
    int n, x = 0, y, flag[100000]= {0};
    cin >> n;
    set<int> v[n+1];
    set<int>::iterator it;
    cin.ignore();
    string s;
    for(int i = 1; i <= n; i++) {
        getline(cin, s);
        for(int j = 0; j < s.size(); j++) {
            if(s[j] != ' ') {
                x = x*10 + (s[j] - '0');
            } else {
                if(i < x) v[i].insert(x);
                x = 0;
            }
            if(j == s.size() - 1) {
                if(i < x) v[i].insert(x);
                x = 0;
            }
        }
    }
    for(int i = 1; i <= n; i++) {
        for(it = v[i].begin(); it != v[i].end(); it++) {
            cout << i << " " << *it << endl;
        }
    }
    return 0;
}
