#include<iostream>

using namespace std;

long long F[100];

char fiboword(int n, long long k)
{
    if(n == 1) return 'A';
    if(n == 2) return 'B';
    if(k <= F[n-2]) return fiboword(n-2, k);
    return fiboword(n-1, k-F[n-2]);
}

int main()
{
    int t, n;
    long long k;
    F[0]=0;
    F[1]=1;
    for(int i = 2; i <= 100; i++)
        F[i] = F[i-1] + F[i-2];
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        cout << fiboword(n, k) << endl;
    }
    return 0;
}
