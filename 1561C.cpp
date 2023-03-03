#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t,cave,dgn,pwr;
	cin>>t;

	while(t--){
		cin>>cave;
		for(int i=0;i<cave;i++){
			cin>>dgn;
			int arr[dgn];

			for(int i=0;i<dgn;i++){
				cin>>arr[i];
			}
			if(cave==1){
				cout<<*max_element(arr, arr+dgn)+1;
			}
			else{
				
			}
		}
	}



	return 0;
}