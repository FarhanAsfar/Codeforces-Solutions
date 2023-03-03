#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ios::sync_with_stdio(false),cin.tie(NULL);

	long long t,n;
	cin>>t;

	while(t--){
		cin>>n;
		int arr[n],sum=0;

		for(int i=0;i<n;i++){
			cin>>arr[i];
			sum+=arr[i];
		}
		int mini = *min_element(arr, arr+n);
		//int l= sizeof(arr)/sizeof(arr[0]);
		int x=0,last=0;
		
		if(n==1){
			cout<<arr[0]<<"\n";
		}
		else if(sum==0){
			cout<<"0"<<"\n";
		}
		else{
			while(n>2){
				for(int i=0;i<n;i+++){
					brr[x]=
				}
			}
		}
		

	}	

	return 0;
}