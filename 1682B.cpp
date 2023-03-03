#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	long long n,t;
	cin>>t;

	while(t--){
		cin>>n;
		long long arr[n],brr[n];

		int j=0;
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		for(int i=0;i<n;i++){
			if(arr[i]!=i){
				brr[j] = arr[i];
				j++;
			}
		}
		int x=brr[0];
		for(int i=0;i<j-1;i++){
			//cout<<brr[i]<<" ";
			x = x & brr[i+1];
		}
		cout<<x<<endl;
	}

	//Accepted.
	return 0;
} 