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
	int count=0;
	for(int i=0;i<s.length();i++){
		if(s[i]=='H'||s[i]=='Q'||s[i]=='9'){
			count++;
		}
	}
	if(count==0)
		cout<<"NO";
	else 
		cout<<"YES";



	return 0;
}