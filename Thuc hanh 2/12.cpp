#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		string n;
        cin>>n;
		int s=0,t=0,x=0;
        for(int i=0; i<n.size(); i++) {
            if(x!=0||n[i]=='1') t=1;
            else if(n[i]>'1')
            {
                t=1;
                x=1;
            }
            else t=0;
            s=s*2+t;
        }
		cout << s << endl;
	}
	return 0;
}
