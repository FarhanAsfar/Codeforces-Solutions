#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int y,w;
	cin>>y>>w;

	int m = max(y,w);
	int x = 6 - m+1;
	int g = gcd(6,x);
	int f1 = x/g;
	int f2 = 6/g;

	cout<<f1<<'/'<<f2;

	return 0;
	//accepted
}