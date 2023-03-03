#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ios::sync_with_stdio(false),cin.tie(NULL);

	int n,k,sum=0,count=0;
	cin>>n>>k;

	int left = 240-k;

	for(int i=1;i<=n;i++){
		sum += i*5;
		if(sum<=left){
			count++;
		}else{
			break;
		}
	}
	cout<<count;

	return 0;
}