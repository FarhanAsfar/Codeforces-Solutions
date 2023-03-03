#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n,x,y;
	cin>>n;
	int arr[n],brr[n];

	for(int i=0;i<n;i++){
		cin>>arr[i];
		brr[i]=arr[i];
	}
	sort(brr, brr+n);
	/*for(int i=0;i<n;i++){
		cout<<brr[i]<<" ";
	}*/
	x = brr[0]; y=brr[1];
	//cout<<x<<" "<<y<<"\n";

	for(int i=0;i<n;i++){
		if(x==arr[i]){
			cout<<i+1<<" ";
			continue;
		}
		if(y==arr[i]){
			cout<<i+1<<" "; 
		}
		
	}


	return 0;
}