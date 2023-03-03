#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ios::sync_with_stdio(false),cin.tie(NULL);

	long long t,x,n;
	cin>>t;

	while(t--){
		cin>>x>>n;
		int m = n%4;
		long long k = n-m+1;

		for(int i=0;i<m;i++){
			if(x%2==0){
				x-=k;
				k++;
			}
			else{
				x+=k;
				k++;
			}
		}
		cout<<x<<"\n";

	} 

	return 0;
}