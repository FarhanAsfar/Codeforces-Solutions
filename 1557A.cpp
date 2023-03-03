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
		long long arr[n],brr[n],crr[n];
		long double  sum=0;
		long double  avg=0;

		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		sort(arr, arr+n);
		
		for(int i=0;i<n;i++){
			brr[0] = arr[n-1];
			break;
		}
		for(int i=0;i<=n-2;i++){
			crr[i] = arr[i];
		}
		for(int i=0;i<=n-2;i++){
			//cout<<crr[i]<<" ";
			sum += crr[i];
		}
		avg = sum/(n-1);
		cout<<fixed<<setprecision(9)<<brr[0]+avg<<"\n";	
	}
		
	

	return 0;
}