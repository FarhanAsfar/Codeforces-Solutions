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
		int arr[n];

		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		int sum=0,c=0;
		int mum = accumulate(arr,arr+n,sum);
		bool flag = false;

		if(mum%x != 0){
			cout<<n<<endl;
		}
		else{
			for(int i=0;i<n;i++){
				mum-=arr[i];
				c++;
				if(mum%x!=0){
					flag=true;
					cout<<n-c<<endl;
					break;	
				}
			}
		}
		if(flag==false)
			cout<<-1<<endl;
	}

	return 0;
} 