#include<iostream>
#include<cstring>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        int dem[256]={0}, m = 0;
        cin >> s;
        for(int i = 0; i < s.size(); i++){
            dem[s[i]]++;
            if(m < dem[s[i]]) m = dem[s[i]];
        }
        (m <= (s.size()+1)/2) ? (cout << 1 << endl) : (cout << -1 << endl);
    }
    return 0;
}
