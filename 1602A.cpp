#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ios::sync_with_stdio(false),cin.tie(NULL);

	int t;
	cin>>t;
	string s;

	while(t--){
		cin>>s;
		int m=0;
		for(int i=1;i<s.size();i++){
			if(s[m]>s[i]){
				m = i;
			}
		}
		cout<<s[m]<<" ";

		for(int i=0;i<s.size();i++){
			if(i != m){
				cout<<s[i];
			}
		}
		cout<<"\n";
	}



	return 0;
}