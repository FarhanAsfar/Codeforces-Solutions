#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ios::sync_with_stdio(false),cin.tie(0);

	int t,n;
	cin>>t;
	while(t--){
		int count=0;
		string s,x,accurate;
		cin>>n>>s;

		x = s;
		sort(x.begin(),x.end());
		if(x==s){
			cout<<s;
		}

		else{
			for(int i=0;i<n;i++){
				if(s[i]=='0'){
					accurate += s[i];
				}
			else
				break;
		}
		accurate += '0';

			for(int i=n-1;i>=0;i--){
				if(s[i]=='1'){
					accurate += s[i];
				}else
					break;
			}
		}
		cout<<accurate<<"\n";
	}	
		//accepted.

	return 0;
}