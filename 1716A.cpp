#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	long long t,n;
	cin>>t;

	while(t--){
		long long x=0;
		cin>>n;

		if(n==2 || n==3){
			cout<<1<<endl;
		}
		else if(n==1){
			cout<<2<<endl;
		}
		else if(n%2==0 && n%3==0){
			cout<<n/3<<endl;
		}
		else{
			if(n%3==0){
				x=n/3;
			}
			else{
				x=n/3+1;
			}
			cout<<x<<endl;
		}
	}


	return 0;
} 