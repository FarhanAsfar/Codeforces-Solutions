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

	while(t--){
		string s;
		cin>>s;
		int e=0,n=0;
		int l = s.length();

		for(int i=0;i<l;i++){
			if(s[i]=='E'){
				e++;
			}else
			n++;
		}
		if(n==1)
			cout<<"NO"<<"\n";
		else
			cout<<"YES"<<"\n";


	}	

	return 0;
}