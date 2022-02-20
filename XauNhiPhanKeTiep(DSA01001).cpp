
#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        int a[1000], n=0;
        cin >> s;
        for(int i = 0; i < s.size(); i++) a[i] = s[i] - '0';
        n = s.size()-1;
        while(a[n] == 1)
        {
            a[n] = 0;
            n--;
        }
        if(n != 0) a[n] = 1;
        for(int i = 0; i < s.size(); i++) cout << a[i];
        cout << endl;
    }
}
