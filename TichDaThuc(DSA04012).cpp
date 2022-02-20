#include<iostream>
#include<algorithm>

using namespace std;

struct DaThuc {
    int value, index;
};

bool cmp(DaThuc a, DaThuc b) {
    return a.index < b.index;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int m, n, k = 0;
        cin >> m >> n;
        DaThuc p[100], q[100], kq[100000]={0}, v[100000]={0};
        int flag[100000]={0};
        for(int i = 0; i < m; i++) {
            cin >> p[i].value;
            p[i].index = i;
        }
//        for(int i = 0; i < m; i++){
//            cout << p[i].index << " ";
//        }
//        cout << endl;
        for(int i = 0; i < n; i++) {
            cin >> q[i].value;
            q[i].index = i;
        }
//        for(int i = 0; i < n; i++){
//            cout << q[i].index << " ";
//        }
//        cout << endl;
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                kq[k].index = p[i].index + q[j].index;
                kq[k].value = p[i].value * q[j].value;
                k++;
            }
        }
        for(int i = 0; i < k; i++) {
            v[kq[i].index].value += kq[i].value;
        }
        for(int i = 0; i < k; i++) {
            if(!flag[kq[i].index]){
                cout << v[kq[i].index].value << " ";
                flag[kq[i].index] = 1;
            }
        }
        cout << endl;
    }
    return 0;
}
