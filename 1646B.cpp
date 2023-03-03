#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t,n,o,e;
	cin>>t;

	while(t--){
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}

		sort(arr,arr+n, greater<int>());
		long long sum=0,sum1=0,sum2=0,x;
		sum = accumulate(arr,arr+n,sum);

		if(n%2==1){
			o = n/2;
			for(int i=0;i<o;i++){
				sum1+=arr[i];
			}
			sum2 = sum-sum1;
			if(sum1>sum2)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
			//cout<<sum<<" "<<sum1<<" "<<sum2<<endl;
		}
		else{
			e = n/2 - 1;
			for(int i=0;i<e;i++){
				sum1+=arr[i];
			}
			x = arr[e];
			sum2 = sum-(sum1+x);
			if(sum1>sum2)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
			//cout<<x<<" "<<sum<<" "<<sum1<<" "<<sum2<<endl;
		}
	}
	//accpeted

	return 0;
} 