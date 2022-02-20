#include<iostream>
#include<stack>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n], b[n], dem[100000]= {0};
        stack<int> st;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            dem[a[i]]++;
        }
        for (int i = n-1; i >= 0; i--) {
            while (!st.empty() && dem[a[i]] >= dem[st.top()]) {
                st.pop();
            }
            if (st.empty()) {
                b[i] = -1;
            } else {
                b[i] = st.top();
            }
            st.push(a[i]);
        }
        for (int i = 0; i < n; i++) {
            cout << b[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
