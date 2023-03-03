#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t,n;
	cin>>t;

	while(t--){
		cin>>n;
		if(n<=1399)
			cout<<"Division 4\n";
		else if(n>=1400 && n<=1599)
			cout<<"Division 3\n";
		else if(n>=1600 && n<=1899)
			cout<<"Division 2\n";
		else
			cout<<"Division 1\n";
	}

	return 0;
} 