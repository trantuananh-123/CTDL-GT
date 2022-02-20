#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, d;
    deque<int> a;
    string s;
    cin>>n;
    while(n--) {
        cin>>s;
        if(s=="PUSHFRONT") {
            cin>>d;
            a.push_front(d);
        }
        else if(s=="PRINTFRONT")
        {
            if(!a.empty()) cout<<a.front()<<endl;
            else cout<<"NONE"<<endl;
        }
        else if(s=="POPFRONT")
        {
            if(!a.empty()) a.pop_front();
        }
        else if(s=="PUSHBACK")
        {
            cin >> d;
            a.push_back(d);
        }
        else if(s=="PRINTBACK")
        {
            if(!a.empty()) cout<<a.back()<<endl;
            else cout<<"NONE"<<endl;
        }
        else if(s=="POPBACK")
        {
            if(!a.empty()) a.pop_back();
        }
    }
    return 0;
}

