#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t,n;
	cin>>t;

	while(t--){
		int a=0,b=0,c=0,d=0,x=0; 
		cin>>n;

		if(n%2==0){
			b=1;
			d=1;
			x=n-2;
			a=x-1;
			c=x-a;
			cout<<a<<" "<<b<<" "<<c<<" "<<d<<"\n";
		}
		else{
			c=1;
			d=1;
			x=n-(c+d);
			a=x/2;
			b=x-a;
			cout<<a<<" "<<b<<" "<<c<<" "<<d<<"\n";	
		}
	}

	return 0;
} 