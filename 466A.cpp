#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n,m,a,b;
	cin>>n>>m>>a>>b;

	int p = n%m;
	int q = n/m;
	int cost1=0, cost2=0, cost3=0;

	cost1 = q*b;
	cost2 = n*a;
	cost3 = (q+1)*b;

	if(p>0){
		cost1 = (q*b)+(p*a);
	}	

	//cout<<cost1<<" "<<cost2<<" "<<cost3<<endl;
	if(m>n){
		cost1 = b;
	}
	cout<<min(cost1, min(cost2,cost3))<<endl;

	//accepted.

	return 0;
} 