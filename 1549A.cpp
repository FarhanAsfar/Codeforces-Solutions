#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	long long t,p,m,x,mod;
	cin>>t;

	while(t--){
		cin>>p;
		x = p/2;
		m = p%2;
		
		if(p==5){
			cout<<"2"<<" "<<"4"<<"\n";
		}
		else{
			cout<<"2"<<" "<<x<<"\n";
		}

	}


	return 0;
}