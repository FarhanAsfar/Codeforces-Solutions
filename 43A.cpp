#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t,count=0,mount=0;
	cin>>t;
	string s[t],s1,s2;

	for(int i=0;i<t;i++){
		cin>>s[i];
		s1 = s[0];
	}
	for(int i=0;i<t;i++){
		if(s1==s[i]){
			count++;
		}
		else{
			mount++;
			s2 = s[i];
		}
	}
	if(count>mount)
		cout<<s1;
	else
		cout<<s2;
	
	//accepted

	return 0;
}