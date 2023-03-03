#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ios::sync_with_stdio(false),cin.tie(NULL);

	long long t,n,k;
	cin>>t;

	while(t--){
		cin>>n>>k;
		long long curr=1,count=0,left;

		while(curr<k){
			count++;
			curr*=2;
		}
		left = n-curr;

		if(left>0){
			if(left%k==0){
				count+= left/k;
			}else{
				count+= left/k +1;
			}
		}
		cout<<count<<"\n";
	}	

	return 0;
}