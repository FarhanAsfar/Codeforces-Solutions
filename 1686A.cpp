#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t,n;
	cin>>t;

	while(t--){
		cin>>n;
		double arr[n];

		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		int sum = 0, count=0;
		int agg = accumulate(arr, arr+n, sum);

		for(int i=0;i<n;i++){
			if((agg-arr[i])/(n-1) == arr[i]){
				count++;
				break;
			}
		}
		if(count==0)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;
	}
	//accepted
	
	return 0;
} 