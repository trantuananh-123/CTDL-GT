#include<iostream>
#include<cstring>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n;
        string s = "";
        while(n--){
            s += 'A';
        }
        cout << s << " ";
        bool flag = true;
        while(flag){
            int m = s.size()-1;
            while(s[m] == 'B' && m >= 0) m--;
            if(m < 0) flag = false;
            else{
                s[m] = 'B';
                int j = m + 1;
                while(j < s.size()){
                    s[j] = 'A';
                    j++;
                }
                cout << s << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
