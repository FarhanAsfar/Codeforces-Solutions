#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n,count=0;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int min=arr[0], max=arr[0];

	for(int i=0;i<n;i++){
		if(arr[i]<min){
			min = arr[i];
			count++;
		}
	
		if(arr[i]>min && arr[i]>max){
			max = arr[i];
			count++;
		}
	}
	cout<<count;

	//accepted

	return 0;
}