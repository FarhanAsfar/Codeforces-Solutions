#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ios::sync_with_stdio(0),cin.tie(0);

	string s;
	int n;
	set <char> setA;
	cin>>n;

	for(int i=0;i<n;i++){
		cin>>s;
		//set <char> setA (begin(s), end(s));
		for(auto i: s)
			setA.insert(i);	
	}


	

	return 0;
}