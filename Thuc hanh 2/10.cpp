#include<iostream>
#include<cstring>
#include<stack>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s, x = "";
        cin >> s;
        for(int i = s.size()-1; i >= 0; i--) {
            if(s[i] == '[') {
                if(s[i-1] >= '0' && s[i-1] <= '9') {
                    x += s[i-1];
                }
                cout << x << endl;
                x = "";
            } else if(s[i] != ']') {
                x += s[i];
            }
        }
    }
    return 0;
}
