#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

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

	int x,count=0,max=0;

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){

			if(brr[j]%arr[i]==0){
				x = brr[j]/arr[i];

				if(x>max){
					max = x;
					count = 1;
				}
				else if(x==max){
					count++;
				}

			}

		}
	}
	cout<<count;
	
	//accepted

	return 0;
}