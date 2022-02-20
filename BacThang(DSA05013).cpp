#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
        cin >> n;
		long long a[100005]={0};
        a[0]=1;
        a[1]=1;
        for(int i=2;i<=n;i++){
            a[i] = 0;
            for(int j=1;j<=min(i,3);j++)
                a[i]+=a[i-j];
        }
        cout<<a[n]<<endl;
    }
	return 0;
}
