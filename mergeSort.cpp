#include <bits/stdc++.h>
using namespace std;

void mergeArr(int arr[],int left, int mid, int right){
	int sLeft,sRight;

	sLeft = mid-left+1;
	sRight = right-mid;

	int L_arr[sLeft], R_arr[sRight];

	for(int i=0;i<sLeft;i++){
		L_arr[i] = arr[left+i];
	}
	for(int i=0;i<sRight;i++){
		R_arr[i]=arr[mid+1+i];
	}
	int indexa, indexL=0, indexR=0;

	for(indexa=left;indexL<sLeft && indexR<sRight; indexa++){
		if(L_arr[indexL]<R_arr[indexR]){
			arr[indexa] = L_arr[indexL];
			indexL+=1;
		}
		else{
			arr[indexa]=R_arr[indexR];
			indexR+=1;
		}
	}

	while(indexL<sLeft){
		arr[indexa]=L_arr[indexL];
		indexL+=1;
		indexa+=1;
	}
	while(indexR<sRight){
		arr[indexa]=R_arr[indexR];
		indexR+=1;
		indexa+=1;
	}
}

void merge_Sort(int arr[], int left, int right){
	if(left>=right){
		return;
	}

	int mid = (left+right)/2;

	merge_Sort(arr,left,mid);

	merge_Sort(arr,mid+1,right);

	mergeArr(arr,left,mid,right);
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

	merge_Sort(arr,0,n);

	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}

	return 0;
} 