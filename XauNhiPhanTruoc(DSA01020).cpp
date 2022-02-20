#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        int a[1000];
        cin >> s;
        for(int i = 0; i < s.size(); i++) a[i] = s[i] - '0';
        int n = s.size()-1;
        while(a[n] == 0)
        {
            a[n] = 1;
            n--;
        }
        if(n != 0) a[n] = 0;
        for(int i = 0; i < s.size(); i++) cout << a[i];
        cout << endl;
    }
    return 0;
}
