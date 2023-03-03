#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t,l,r,k;
	cin>>t;

	while(t--){
		cin>>l>>r>>k;
		int odd=0,even=0;

		odd = (r-l)/2;
		if(l%2==1 || r%2==1){
			odd++;
		}
		even = (r-l+1)-odd;

		if(l==r && r!=1){
			cout<<"YES"<<"\n";
		}
		else if(k>=odd){
			cout<<"YES"<<"\n";
		}
		else{
			cout<<"NO"<<"\n";
		}
	}


	return 0;
} 