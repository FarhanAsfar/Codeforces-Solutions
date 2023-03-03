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
		if(s[i]=='a'||s[i]=='y'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='Y'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
			continue;
		else
			transform(s.begin(), s.end(),s.begin(), ::tolower);
		cout<<"."<<s[i];
	}


	return 0;
}