#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int s,n;
	cin>>s>>n;
	pair<int , int> arr[n];

	for(int i=0;i<n;i++){
		cin>>arr[i].first>>arr[i].second;
	}
	sort(arr, arr+n);


	for(int i=0;i<n;i++){
		if(s<=arr[i].first){
			cout<<"NO";
			return 0;
		}
		s += arr[i].second;
	}
	cout<<"YES";

//accepted

	return 0;
}