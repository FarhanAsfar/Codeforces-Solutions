#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int k,n,w;
	cin>>k>>n>>w;
	int price=0,x;

	for(int i=1;i<=w;i++){
		x = i*k;
		price += x;
	}
	if(price<=n)
		cout<<"0";
	else
		cout<<price-n;

	//accepted.

	return 0;
}