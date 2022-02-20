#include<iostream>
#include<string.h>
#include<cmath>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long sum1 = 0, sum2 = 0;
        string s1, s2;
        cin >> s1 >> s2;
        int j = 0;
        for(int i = s1.size()-1; i >= 0; i--){
            sum1 += (s1[i] - '0') * pow(2, j);
            j++;
        }
        j = 0;
        for(int i = s2.size()-1; i >= 0; i--){
            sum2 += (s2[i] - '0') * pow(2, j);
            j++;
        }
        cout << sum1 * sum2 << endl;
    }
    return 0;
}
