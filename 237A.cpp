#include <bits/stdc++.h>
using namespace std;
int arr[24][60];
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n,a,b,maax=0;
	cin>>n;
	

	while(n--){
		cin>>a>>b;
		arr[a][b]++;
		
		if(arr[a][b]>maax){
			maax = arr[a][b];
		}
	}
	cout<<maax;

	//ACCEPTED
	return 0;
} 