#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ios::sync_with_stdio(false),cin.tie(NULL);

	long long t,n,r,flag=0,i;
	cin>>t;

	while(t--){
		cin>>n;
		if(n<3){
			cout<<"NO"<<"\n";
		}
		else if(n%2==1){
			cout<<"YES"<<"\n";
		}
		else{
			while(n%2==0){
				n /= 2;
			}
			if(n>1){
				cout<<"YES"<<"\n";
			}else{
				cout<<"NO"<<"\n";
			}
		}

	}

	return 0;
}