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

	for(int i=0;i<=n;i++){
		for(int j=i;j<n;j++){
			cout<<" ";
		}
		for(int j=0;j<=i;j++){
			cout<<j;
			if(i!=0){
				cout<<" ";
			}
		}
		for(int j=i-1;j>=0;j--){
			if(j!=i){
				cout<<" ";
			}
			cout<<j;
		}
		cout<<"\n";
	}
	for(int i=n-1;i>=0;i--){
		for(int j=i;i<=n-1;j++){
			cout<<" ";
		}
		for(int j=0;j<=i;j++){
			cout<<j;
			if(j!=i){
				cout<<" ";
			}
		}
		for(int j=i-1;j>=0;j--){
			cout<<" "<<j;
		}
		cout<<"\n";
	}

	return 0;
}