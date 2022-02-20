#include<iostream>
#include<set>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int v, e, x, y;
        cin >> v >> e;
        set<int> s[1000];
        set<int>:: iterator it;
        for(int i = 1; i <= e; i++){
            cin >> x >> y;
            s[x].insert(y);
            s[y].insert(x);
        }
        for(int i = 1; i <= v; i++){
            cout << i << ":" << " ";
            for(it = s[i].begin(); it != s[i].end(); it++){
                cout << *it << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
