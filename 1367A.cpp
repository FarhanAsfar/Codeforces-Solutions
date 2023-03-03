#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	string s,x;
	cin>>s;

	for(int i=0;i<s.length()-1;i++){
		x = s.substr(i, i+1);
		cout<<x<<"\n";
	}


	return 0;
}