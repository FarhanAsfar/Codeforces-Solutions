#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ios::sync_with_stdio(false),cin.tie(NULL);

	int n,t;
	cin>>t;

	while(t--){
		cin>>n;
		int count=0;

		if(n%2==0 && n%3==0 && n%5==0){
			while(n!=1){
				n = n/2;
				if(n%2==0){
					n /= 2;
				}else if(n%3==0 && n%5==0){
					n = (2*n)/3;
				}else{
					n = (4*n)/5;
				}
				count++;
			}
		}
		cout<<count;
		
	}


	return 0;
}