#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ios::sync_with_stdio(0),cin.tie(0);

	int t,n;
	string s;
	cin>>t;

	while(t--){
		cin>>n>>s;
		for(int i=0;i<n;i++){
			if(s[i]=='U'){
				cout<<"D";
			}else if(s[i]=='D'){
				cout<<"U";
			}else if(s[i]=='L'){
				cout<<"L";
			}else if(s[i]=='R'){
				cout<<"R";
			}
		}
		cout<<"\n";
	}
	

	return 0;
}