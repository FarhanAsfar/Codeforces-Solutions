#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ios::sync_with_stdio(0),cin.tie(0);

	int n,r;
	cin>>n;

	r = n%4;

	if(n%2!=0){
		cout<<"0";
	}
	else{
		if(r==0){
			cout<<(n/4)-1;
		}else{
			cout<<n/4;
		}
	}

	return 0;
}