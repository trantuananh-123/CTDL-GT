#include<iostream>
#include<queue>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        queue<string> q;
        string s = "";
        long long x = 0;
        q.push("9");
        while(q.size() > 0){
            string s = q.front();
            q.pop();
            for(int i = 0; i < s.size(); i++){
                x = x*10 + (int)(s[i] - '0');
                x %= n;
            }
            if(x == 0){
                cout << s << endl;
                break;
            }
            q.push(s+"0");
            q.push(s+"9");
            x = 0;
            s = "";
        }
    }
    return 0;
}

