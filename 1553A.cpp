#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int x,t;
	cin>>t;
	
	while(t--){
		cin>>x;
		x++;
		cout<<x/10<<"\n";
	}


	return 0;
}