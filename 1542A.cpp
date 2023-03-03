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
		int arr[n*2];
		int even=0, odd=0;

		for(int i=0;i<n*2;i++){
			cin>>arr[i];
		}

		for(int i=0;i<n*2;i++){
			if(arr[i]%2==0){
				even++;
			}else{
				odd++;
			}
		}
		//cout<<even<<" "<<odd;
		if(even==odd){
			cout<<"YES"<<"\n";
		}else{
			cout<<"NO"<<"\n";
		}
	}


	return 0;
}