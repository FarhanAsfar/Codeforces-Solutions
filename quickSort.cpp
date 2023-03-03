#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int left, int right){
	int p,temp,i,j;
	p = arr[right];

	for(i=left-1, j=left; j<right;j++){
		if(arr[j]<p){
			i+=1;
			swap(arr[j], arr[i]);
		}
	}
	temp = arr[right];
	arr[right] = arr[i+1];
	arr[i+1] = temp;

	return i+1;
}

void qSort(int arr[], int left, int right){
	if(left>=right){
		return;
	}
	
	int piv = partition(arr,left,right);
	
	qSort(arr,left,piv-1);
	qSort(arr,piv+1,right);

}

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
	qSort(arr,0,n);

	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}

	return 0;
} 