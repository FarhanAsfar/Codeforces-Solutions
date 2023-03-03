#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int aprint(int arr[],int brr[], int n){
	int count=0;
	for(int i=0;i<n;i++){
		//cout<<arr[i]<<" ";
		if(arr[i]==brr[i]){
			count++;
		}
	}
	//cout<<"\n";
	return count;
}

int main() {
	int n;
	cin>>n;
	
	int arr[n], brr[n];
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
		brr[i]=arr[i];
	}
	sort(brr,brr+n);
	
	/*reverse(arr, arr+3);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}*/
	int x;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<=n;j++){
			reverse(arr,arr+j);
			x = aprint(arr,brr,n);
			reverse(arr,arr+j);
			
			if(x==n){
				cout<<i+1<<" "<<j<<"\n"<<"yes";
				return 0;
			}
		}
	}
	cout<<"no";
	
	return 0;
}