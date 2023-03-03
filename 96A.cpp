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
	int count=1;

	for(int i=0;i<s.length();i++){
		if(s[i]==s[i+1]){
			count++;
		}
		else{
			count=1;
		}

		if(count>=7){
			cout<<"YES";
			return 0; 
		}	
	}
	cout<<"NO";
	
//accepted

	return 0;
}