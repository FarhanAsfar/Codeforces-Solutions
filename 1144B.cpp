#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ios::sync_with_stdio(false),cin.tie(NULL);

	int n;
	cin>>n;
	int arr[n],even[n],odd[n];
	int e=0,o=0,ec=0,oc=0,sum=0;

	for(int i=0;i<n;i++){
		cin>>arr[i];
		sum+=arr[i];

		if(arr[i]%2==0){
			ec++;
		}else{
			oc++;
		}
	}
	int mini = min(ec,oc);	
//	sort(arr,arr+n,greater<int>());

	for(int i=0;i<n;i++){
		if(arr[i]%2==0){
			even[e]=arr[i];
			e++;
		}else{
			odd[o]=arr[i];
			o++;
		}
	}
	sort(even, even+e,greater<int>());
	sort(odd, odd+o,greater<int>());
	int esum=0, osum=0;

	if(ec==oc){
		cout<<"0";
	}
	else{
		if(ec>oc){
			for(int i=0;i<oc+1;i++){
				esum+=even[i];
			}
			for(int i=0;i<oc;i++){
				osum+=odd[i];
			}
			cout<<sum-(esum+osum);	
		}
		else if(oc>ec){
			for(int i=0;i<ec+1;i++){
				osum+=odd[i];
			}
			for(int i=0;i<ec;i++){
				esum+=even[i];
			}
			cout<<sum-(esum+osum);	
		}

	}
	

	

	return 0;
}