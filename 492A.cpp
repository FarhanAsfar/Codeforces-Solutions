#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ios::sync_with_stdio(false),cin.tie(NULL);

	int n;
	cin>>n;
	int sum=0,i=1,count=0;

	while(sum<n){
		i++;
		sum+= (i*(i+1))/2;
	}
	cout<<i-1;

	return 0;
}