#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	long long n,t,x,y,p,q,r;
	cin>>t;

	while(t--){
		cin>>n;
		p=n%4, q=n%6;

		if(n%2==1 || n<4){
			cout<<-1<<endl;
		}
		if(p==0 && q==0){
			cout<<n/6<<" "<<n/4<<"\n";
		}
		if(p==0 && q==4){
			cout<<n/6+1<<" "<<n/4<<"\n";
		}

	}	

	return 0;
} 