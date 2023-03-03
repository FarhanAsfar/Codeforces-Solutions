#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n,b,d;
	cin>>n>>b>>d;
	int m;
	int sum=0,empty=0;
	for(int i=0;i<n;i++){
		cin>>m;
		if(m<=b){
			sum+=m;

			if(sum>d){
				empty++;
				sum=0;
			}
		}
	}
	
	/*for(int i=0;i<n;i++){
		if(arr[i]>b)
			continue;
		sum=arr[i]+arr[i+1];
		
		if(sum>d){
			empty++;
			sum=0;
		}	
	}*/
	cout<<empty;


	return 0;
}