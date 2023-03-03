#include <bits/stdc++.h>
using namespace std;
//Round726_A(1537)_Arithmatic mean
//accepted
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t;
	cin>>t;

	while(t--){
		int n,a;
		int s=0;
		//double check;
		cin>>n; int arr[n];

		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		int len = sizeof(arr)/sizeof(arr[0]);
		//cout<<len<<" ";
		for(int i=0;i<n;i++){
			s += arr[i];
		}
		//cout<<s<<"\n";
		if(s==len){
			cout<<"0"<<"\n";
		}
		else if(s<0){
			cout<<"1"<<"\n";
		}else if(s<len){
			cout<<"1"<<"\n";
		}
		else{
			a =s-len;
			cout<<a<<"\n";
		}
		
	}

	return 0;
}