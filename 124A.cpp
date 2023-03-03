#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n,a,b;
	cin>>n>>a>>b;

	cout<<n-max(a+1,n-b)+1;


	return 0;
}