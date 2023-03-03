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
		int arr[10];
		int sum=0,x=0,p;

		if(n<=9){
			cout<<n;
		}
		else{
			for(int i=9;i>=1;i--){
				sum+=i;
				if(sum<=n){
					arr[x]=i;
					x++;
				}
				else{
					sum-=i;
				}
			}
		}
		sort(arr,arr+x);

		for(int i=0;i<x;i++){
			cout<<arr[i];
		}
		cout<<endl;
	}
	//Accepted

	return 0;
} 