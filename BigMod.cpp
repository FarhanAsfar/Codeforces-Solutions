#include <bits/stdc++.h>
using namespace std;

int bigmod(long long b, long long p, long long m){
	int x;
	if(p==0){
		return 1;
	}
	else if(p%2==0){
		x = bigmod(b, p/2, m);
		return (x*x)%m;
	}
	else{
		return ((b%m)*bigmod(b, p-1, m))%m;
	}

}

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	long long b,p,m;

	while(cin>>b>>p>>m){
		cout<<bigmod(b,p,m)<<"\n";	
	}

	return 0;
}