#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n;
	cin>>n;
	int arr[n];

	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	//int x=  max_element(arr, arr+n)-arr; //index of max 
	//int y=  min_element(arr, arr+n)-arr; //index of min
	//cout<<x<<" "<<y<<"\n";
	//cout<<(x-0)+(n-1-y);

	int max = arr[0];
	int min = arr[0];
	int maxi=0, mini=0;

	for(int i=0;i<n;i++){
		if(max<arr[i]){
			max = arr[i];
			maxi = i;
		}
	}
	for(int i=0;i<n;i++){
		if(min>=arr[i]){
			min = arr[i];
			mini = i;
		}
	}
	//cout<<maxi<<" "<<mini;
	if(maxi>mini){
		cout<<maxi+n-mini-2;
	}else{
		cout<<maxi+n-mini-1;
	}

//accepted

	return 0;
}