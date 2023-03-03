#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ios::sync_with_stdio(false),cin.tie(NULL);

	int t,n,k;
	cin>>t;

	while(t--){
		cin>>n>>k;
		int arr[k],brr[k];

		for(int i=0;i<k;i++){
			cin>>arr[i];
		}
		sort(arr, arr+k);
		//sort(arr, arr+k, greater<int>());

		/*for(int i=0;i<k;i++){
			brr[i] = n-arr[i];
		}*/

		//int mini= *min_element(arr, arr+k);
		int cat=0,count=0,j=k-1,distance;
		int mice=arr[j];

		while(cat<mice){
			distance = n-mice;
			count++; 
			j--;
			if(j<0){
				break;
			}
			cat+=distance;
			mice=arr[j];
		}
		//cout<<"\n";
		cout<<count<<"\n";

	}//done.	

	return 0;
}