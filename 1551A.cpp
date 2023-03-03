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
		int c1=0,c2=0,x=0;
		cin>>n;
		/*c2 = n/3;
		x = c2*2;
		c1 = n-x;*/
		c2 = (n+1)/3;
		x = c2*2;
		c1 = n-x;

		cout<<c1<<" "<<c2<<"\n";
	}

	//accepted
	
	return 0;
}