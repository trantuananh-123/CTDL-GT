#include<iostream>
#include<vector>

using namespace std;

int check(vector<int> vec[], int v) {
    int flag = 0;
    for(int i = 1; i <= v; i++) {
        if(vec[i].size() % 2 == 1) {
            flag++;
        }
    }
    if(flag == 0) return 2;
    if(flag == 2) return 1;
    return 0;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        vector<int> vec[1005];
        int v, e, x, y;
        cin >> v >> e;
        for(int i = 1; i <= e; i++) {
            cin >> x >> y;
            vec[x].push_back(y);
            vec[y].push_back(x);
        }
        cout << check(vec, v) << endl;
    }
}
