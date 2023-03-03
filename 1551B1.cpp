#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t;
	cin>>t;

	while(t--){
		string s,s1;
		cin>>s;

		int count=0,mount=0,ans=0;
		int len =s.length();

		for(int i=0;i<s.length();i++){
			for(int j=i+1;j<s.length();j++){

				if(s[i]==s[j]){
					count++;
					//cout<<s[i];
				}
				else if(s[0]!=s[i]){
					mount++;
				}
			}
		}	
		//cout<<len<<"\n";
		if(mount==0 && len>1){
			cout<<"1"<<"\n";
		}
		else if(len==1){
			cout<<"0"<<"\n";
		}
		else{
			cout<<len/2<<"\n";
		}
		


			
	}	


	return 0;
		
}