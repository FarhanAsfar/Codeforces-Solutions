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

		for(int i=0;i<n;i++) cin>>arr[i];

		sort(arr, arr+n);

		int count=0,x;
		for(int i=0;i<n;i++){
			if(arr[i]==arr[i+1]){
				count++;
			}else
				count=0;
				
			if(count==2){
				x = arr[i];
				break;
			}
		}
		if(count==2)
			cout<<x<<endl;
		else
			cout<<-1<<endl;
		
	}

	return 0;
} 