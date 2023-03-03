#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ios::sync_with_stdio(0),cin.tie(0);

	int n,t;
	cin>>t;
	string s;

	while(t--){
		cin>>n>>s;
		int a=0,b=0;

		for(int i=0;i<n;i++){
			if((s[i]=='a'&&s[i+1]=='b') || s[i]=='b'&&s[i+1]=='a'){
				a=i;
				b=i+1; 
			}
		}
		if(a==0 && b==0){
			cout<<"-1"<<" "<<"-1";
		}
		else{
			cout<<a+1<<" "<<b+1;
		}
		cout<<"\n";
	}	

	return 0;
}