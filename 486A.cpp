#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ios::sync_with_stdio(false),cin.tie(NULL);

	long long n;
	cin>>n;

	if(n%2==0){
		cout<<n/2;
	}else{
		cout<<-(n+1)/2;
	}
	

	return 0;
}