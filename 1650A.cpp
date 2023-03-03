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
	string s,a,b;
	char c;

	while(t--){
		cin>>s>>c;
		int x=0,y=0;	

		/*if(s[0]==c || s[s.length()-1]==c){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}*/

		for(int i=0;i<s.length();i++){
			if(s[i]==c && i%2==0){
				//x=i+1;
				y=1;
			}
		}
		if(y==1)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;

			
	}

	return 0;
				
		
} 