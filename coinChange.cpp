#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int amount,coin=0;
	int arr[]={1000,50,200,1,2,5,10,200,500,100,20};

	sort(arr,arr+11,greater<int>());
	
	cin>>amount;

	int i=0;
	while(amount>0){
		int x=0;
		x = amount/arr[i];
		amount = amount-(x*arr[i]); 
		coin+=x;
		i++; 
		//cout<<coin<<" "<<amount<<" "<<i<<" "<<arr[i]<<"\n";
	}
	cout<<coin;


	return 0;
} 