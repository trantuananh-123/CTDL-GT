#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s1, s2;
        cin >> s1 >> s2;
        int dem[1000][1000]={0}, m = 0;
        for(int i = 1; i <= s1.size(); i++){
            for(int j = 1; j <= s2.size(); j++){
                if(s1[i-1] == s2[j-1]){
                    dem[i][j] = dem[i-1][j-1] + 1;
                } else {
                    dem[i][j] = max(dem[i-1][j], dem[i][j-1]);
                }
                m = max(m, dem[i][j]);
            }
        }
        cout << m << endl;
    }
    return 0;
}
