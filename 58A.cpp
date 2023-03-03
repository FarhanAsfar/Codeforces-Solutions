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

	string x = "hello";
	int c=0,d=0;

	for(int i=0;i<s.length();i++){
		if(s[i]==x[c]){
			c++;
			d++;
		}
	}
	if(d==5)
		cout<<"YES";
	else
		cout<<"NO";

	//accpeted.

	return 0;
} 