#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a[1000], n, k, dem=0;
        cin >> n >> k;
        for(int i = 0; i < k; i++) cin >> a[i];
        int i = k-1;
        for(int j = 0; j < k; j++)
            if(a[j] == n-k+j+1) dem++;
        if(dem != k)
        {
            while(i >= 0 && a[i] == n-k+i+1) i--;
            if(i >= 0)
            {
                a[i]++;
                for(int j = i + 1; j < k; j++) a[j] = a[i] + j - i;
            }
            for(int j = 0; j < k; j++) cout << a[j] << " ";
            cout << endl;
        }
        else
        {
            for(int j = 0; j < k; j++) cout << j+1 << " ";
            cout << endl;
        }
    }
}
