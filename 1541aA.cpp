#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t,x;
	cin>>t;
	//int even[2000],odd[2000];

	while(t--){
		cin>>x;
		int arr[x];
		//int e=0,o=0;

		for(int i=1;i<=x;i++){
			arr[i] = i;
		}

		int p;
		if(x%2==1){
			p = (x+1)/2;
			cout<<arr[p]<<" ";
		}
		for(int i=1;i<=x;i++){
			if(i==p)
				continue;
			if(arr[i]%2==0){
				cout<<arr[i]<<" ";
			}else
			cout<<arr[i++]<<" ";
		}

		/*for(int i=1;i<=x;i++){
			if(arr[i]%2==0){
				even[e++]=arr[i];
			}
			else{
				odd[o++]=arr[i];
			}
			cout<<even[e]<<" "<<odd[o];
		}*/

		cout<<"\n";
	}
		/*for(int i=1;i<=x;i++){
			cout<<arr[i]<<" ";
		}*/






	return 0;
}