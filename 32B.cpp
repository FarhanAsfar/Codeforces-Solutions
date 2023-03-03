#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	string s;
	cin>>s;

	for(int i=0;i<s.length();i++){
		if(s[i]=='-'){
			if(s[i+1]=='-')
				cout<<"2";
			else if(s[i+1]=='.')
				cout<<"1";
			i++;
		}
		else{
			cout<<"0";
		}
		
	}

	return 0;
}