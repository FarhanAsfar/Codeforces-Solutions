#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ios::sync_with_stdio(false),cin.tie(NULL);

	int a,b;
	cin>>a>>b;

	int mi = min(a,b);
	int ma = max(a,b);

	cout<<mi<<" "<<(ma-mi)/2;


	return 0;
}