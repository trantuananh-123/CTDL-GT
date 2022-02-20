#include<iostream>
#include<algorithm>
using namespace std;

int n, s, a[100000], b[100000], d[100000], m=1000000000, flag=0;

void Try(int i, int s)
{
    for(int j = n-1; j >= 0; j--)
    {
        if(a[j] <= s && d[j] == 0)
        {
            s -= a[j];
            b[i] = j;
            d[j] = 1;
            if(s == 0)
            {
                flag = 1;
                if(m > i) m = i+1;
            }
            else Try(i+1, s);
            s += a[j];
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        m = 1000000000;
        flag = 0;
        for(int i = 0; i < n; i++)
        {
            b[i] = 0;
            d[i] = 0;
        }
        cin >> n >> s;
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a, a+n);
        Try(0, s);
        if(flag == 1) cout << m << endl;
        else cout << -1 << endl;
    }
}
