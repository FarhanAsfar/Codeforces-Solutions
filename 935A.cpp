#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ios::sync_with_stdio(false),cin.tie(NULL);

	int n,count=0;
	cin>>n;

	if(n%2==1){
		cout<<1;
	}	
	else{
		for(int i=2;i<=n/2;i++){
			if(n%i==0){
				count++;
			}
		}
		cout<<count+1;
	}


	return 0;
}