#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int a,b,c;
	cin>>a>>b>>c;

	int x = a*b*c;
	int y = (a+b)*c;
	int z = (a*b)+c;
	int p = a+b+c;
	int q = a*(b+c);

	int m = max(x,y);
	int n = max(z,p);

	cout<<max(q, max(m,n));

	//accpeted.

	return 0;
} 