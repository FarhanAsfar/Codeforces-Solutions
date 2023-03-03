#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	string a,b;
	int x,l;
	cin>>a>>b;

	for(int i=0;i<a.length();i++){
		x = a[i]^b[i];   //xor operation
		cout<<x;
	}

	

	return 0;
}