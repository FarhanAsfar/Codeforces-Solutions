#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n,m,count=0,mount=0;
	cin>>n>>m;

	for(int i=0; i*i<=n && i<=m; i++){
		int j = n-i*i;
		if(i+j*j == m){
			count++;
		}
	}
	cout<<count;
	
//accepted

	return 0;
}