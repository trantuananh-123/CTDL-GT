#include<iostream>
#include<cstring>
#include<set>

using namespace std;

set<string> st;

void Try(string s, string kq) {
    if(s.empty()) {
        st.insert(kq);
        return;
    }
    Try(s.substr(1), kq + s[0]);
    Try(s.substr(1), kq);
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        string s, kq = "";
        cin >> n >> s;
        s.substr(1);
        kq += s[0];
        cout << kq;
//        Try(s, kq);
//        set<string>::iterator it;
//        for(it = st.begin(); it != st.end(); it++){
//            cout << *it << " ";
//        }
//        st.clear();
        cout << endl;
    }
    return 0;
}
