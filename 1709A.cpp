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
		int arr[3];

		for(int i=1;i<=3;i++){
			cin>>arr[i];
		}

		if(arr[n]==0){
			cout<<"NO"<<endl;
		}
		else if(arr[arr[n]]==0){
			cout<<"NO"<<endl;
		}
		else{
			cout<<"YES"<<endl;
		}
	}


	return 0;
} 