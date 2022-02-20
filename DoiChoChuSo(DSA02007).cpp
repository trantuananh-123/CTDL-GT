//#include <iostream>
//#include<cstring>
//
//using namespace std;
//
//string s, kq;
//int k;
//
//void dequyChuSo(int k) {
//    if (k == 0) {
//        return;
//    }
//    for (int i = 0; i < s.size() - 1; i++) {
//        for (int j = i + 1; j < s.size(); j++) {
//            if (s[i] < s[j]) {
//                swap(s[i], s[j]);
//                if (s.compare(kq) > 0) {
//                    kq = s;
//                }
//                dequyChuSo(k-1);
//                swap(s[i], s[j]);
//            }
//        }
//    }
//}
//
//int main() {
//    int t;
//    cin >> t;
//    while (t--) {
//        cin >> k;
//        cin >> s;
//        kq = s;
//        dequyChuSo(k);
//        cout << kq << endl;
//    }
//    return 0;
//}

#include<bits/stdc++.h>
using namespace std;

string s;

void Swap(int i, int k){
	if(k==0 || i==s.size()-1)
		return;
	int m=s.size()-1;
	for(int j=s.size()-2; j>i; j--){
		if(s[j]>s[i] && s[j]>s[m]){
			m=j;
		}
	}
	if(s[m]>s[i]){
		swap(s[m], s[i]);
		Swap(i+1, k-1);
	}
	else
		Swap(i+1, k);
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int k;
		cin>>k;
		cin>>s;
		Swap(0, k);
		cout<<s<<endl;
	}
	return 0;
}
