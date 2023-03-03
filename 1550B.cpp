#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t,n,a,b;
	string s;
	cin>>t;

	
	while(t--){
		cin>>n>>a>>b;
		cin>>s;
		int ans = a*n;

		if(b>=0){
			ans = (b*n+a*(n));
		}
		else{
			int count=0;
			char c ;
			for(int i=0;i<n;i++){
				if(s[i]==s[i+1])
				continue;
		 		c = s[i];
		 		count++;
			}
			ans += ((count/2)+1)*b;
		}
			cout<<ans<<"\n";
	}
	//accepted

	return 0;
}