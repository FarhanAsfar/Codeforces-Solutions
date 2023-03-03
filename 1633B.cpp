#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t,n;
	cin>>t;

	while(t--){
		string s;
		cin>>s;
		int o=0,z=0;
		
		for(int i=0;i<s.length();i++){
			if(s[i]=='0'){
				o++;
			}else{
				z++;
			}
		}
		if(o==0 || z==0 || (o==1 && z==1) || s.length()==1){
			cout<<0<<"\n";
		}
		else if(o==z){
			cout<<o-1<<"\n";
		}
		else{
			cout<<min(o,z)<<"\n";
		}
	}
	//accepted
	
	return 0;
} 