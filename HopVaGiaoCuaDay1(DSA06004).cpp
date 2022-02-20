#include<iostream>
#include<algorithm>
#include<set>
#include<vector>

using namespace std;

int a[100000], b[100000], c[100000], d[100000], flag[100000], flag1[100000], dem[100000];

int main(){
    int t;
    cin >> t;
    while(t--){
        int p=0, k=0, n, m;
        cin >> n >> m;
        for(int i = 0; i < 100000; i++){
            c[i] = 0;
            d[i] = 0;
            flag[i] = 0;
            flag1[i] = 0;
            dem[i] = 0;
        }
        for(int i = 0; i < n; i++){
            cin >> a[i];
            d[k++] = a[i];
            dem[a[i]]++;
        }
        for(int i = 0; i < m; i++){
            cin >> b[i];
            d[k++] = b[i];
            dem[b[i]]++;
        }
        sort(d, d+k);
        for(int i = 0; i < k; i++){
            if(dem[d[i]] > 0 && flag1[d[i]] == 0){
                cout << d[i] << " ";
                flag1[d[i]] = 1;
            }
        }
        cout << endl;
        for(int i = 0; i < n; i++)
            flag[a[i]] = 1;
        for(int i = 0; i < m; i++){
            if(flag[b[i]] == 1) c[p++] = b[i];
        }
        sort(c, c+p);
        for(int i = 0; i < p; i++)
            cout << c[i] << " ";
        cout << endl;
    }
    return 0;
}


//int main(){
//    int t;
//    cin >> t;
//    while(t--){
//        set<int> s;
//        vector<int> v;
//        int n, m, a[100000], b[100000], dem[100000]={0};
//        cin >> n >> m;
//        for(int i = 0; i < n; i++){
//            cin >> a[i];
//            s.insert(a[i]);
//            v.push_back(a[i]);
//            dem[a[i]]++;
//        }
//        for(int i = 0; i < m; i++){
//            cin >> b[i];
//            s.insert(b[i]);
//            v.push_back(b[i]);
//            dem[b[i]]++;
//        }
//        set<int>::iterator it = s.begin();
//        for(;it != s.end(); it++)
//            cout << *it << " ";
//        cout << endl;
//        for(int i = 0; i < v.size(); i++){
//            if(dem[v.at(i)] > 1){
//                cout << v.at(i) << " ";
//                dem[v.at(i)] = 0;
//            }
//        }
//        cout << endl;
//    }
//}
