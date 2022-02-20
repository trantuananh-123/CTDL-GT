#include<bits/stdc++.h>

using namespace std;

long long conech(int n){
	long long a[n];
	a[0]=1;
	a[1]=1;
	for(int i=2;i<n;i++){
		a[i] = 0;
		for(int j=1;j<=3&&j<=i;j++)
			a[i]=(a[i]%1000000007+a[i-j]%1000000007)%1000000007;
	}
	return a[n];
}

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
        cin >> n;
		cout << conech(n+1) << endl;
	}
	return 0;
}
