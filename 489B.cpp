#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ios::sync_with_stdio(false),cin.tie(NULL);

	int n,m;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cin>>m;
	int brr[m];
	for(int i=0;i<m;i++){
		cin>>brr[i];
	}

	sort(arr, arr+n);
	sort(brr, brr+m);

	int count=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(abs(arr[i]-brr[j])<=1){
				brr[j]=0; //brr[j]=-5 / brr[j]=1000;
				count++;
				break;
			}
		}
	}
	cout<<count;


	return 0;
}