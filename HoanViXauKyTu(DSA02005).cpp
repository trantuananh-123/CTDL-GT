#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

string s;
int flag;

void print(){
    cout << s << " ";
}

void gen(){
    int n = s.size()-2;
    while(s[n] > s[n+1] && n >= 0) n--;
    if(n >= 0){
        int m = s.size()-1;
        while(s[n] > s[m]) m--;
        swap(s[n], s[m]);
        reverse(s.begin()+n+1, s.end());
    }
    else{
        flag = 1;
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> s;
        while(!flag){
            print();
            gen();
        }
        cout << endl;
        flag = 0;
    }
    return 0;
}
