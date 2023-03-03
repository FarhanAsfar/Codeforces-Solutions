//Find a pair in an array whose sum is equal to X.

#include <bits/stdc++.h>
using namespace std;

int val1, val2;
bool solve(int arr[], int n, int x){
	int i=0, j=n-1;
	bool ans=false;

	while(i<j){
		int sum=arr[i]+arr[j];
		
		if(sum==x){
			val1=arr[i];
			val2=arr[j];
			return true;
		}
		else if(sum>x)
			j--;
		else
			i++;
	}
	return false;
}

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n,x;
	cin>>n;

	int arr[n];

	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);

	cin>>x;

	bool ans = solve(arr, n, x);
	
	if(ans==true){
		cout<<"yes"<<endl;
		cout<<val1<<" "<<val2;
	}	
	else
		cout<<"no"<<endl;

	return 0;
} 