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
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		long long s=0,count=0;
		
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(arr[i]>arr[j]){
					//s = arr[i]+arr[j];
					if((arr[i]%2==0 && arr[j]%2==0)|| (arr[i]%2==1 && arr[j]%2==1)){
						count++;
						break;
					}else{
						continue;
					}
				}
			}
		}
		if(count>0)
			cout<<"NO"<<"\n";
		else
			cout<<"YES"<<"\n";

	}
	return 0;
} 