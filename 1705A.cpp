#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t,n,x;
	cin>>t;

	while(t--){
		cin>>n>>x;
		int arr[2*n], brr[n];

		for(int i=0;i<2*n;i++){
			cin>>arr[i];
		}
		sort(arr, arr+2*n);
		
		int m=0;
		for(int i=n;i<2*n;i++){
			brr[m]=arr[i];
			m++;
		}

		bool flag=true;
		for(int i=0;i<n;i++){
			if(brr[i]-arr[i]<x){
				flag=false;
				break;
			}
		}
		
		if(flag==true)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}

	//Accepted.

	return 0;
} 