#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int k,r,n=10,x;
	cin>>k>>r;

	for(int i=1;i<=n;i++){
		x = k*i % 10;
		//cout<<x<<"\n";
		if(x==r || x==0){
			cout<<i<<" ";
			break;
		}
	}

	return 0;
}