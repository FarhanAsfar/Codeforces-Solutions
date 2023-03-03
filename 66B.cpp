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
	//int m = distance(arr, max_element(arr,arr+n));
	
	int maximal=0;


	for(int i=0;i<n;i++){
		int lc=0, rc=0;
		for(int j=i-1;j>=0;j--){
			if(arr[j]<=arr[j+1]){
				lc++;
			}
			else{
				break;
		}
	}
		for(int j=i+1;j<n;j++){
			if(arr[j]<=arr[j-1]){
				rc++;
			}
			else{
				break;
			}
		}
		//cout<<lc<<" "<<rc<<"\n";
		maximal = max((lc+rc),maximal); 
	}
	cout<<maximal+1;
	

	return 0;
} 