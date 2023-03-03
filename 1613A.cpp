#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ios::sync_with_stdio(false),cin.tie(NULL);

	int t,x1,x2,p1,p2;
	cin>>t;

	while(t--){
		cin>>x1>>p1;
		cin>>x2>>p2;

		double a = pow(10,p1);
		double r1 = a*x1;

		double b = pow(10,p2);
		double r2 = b*x2;

		if(r1<r2){
			cout<<"<"<<"\n";
		}
		else if(r1>r2){
			cout<<">"<<"\n";	
		}
		else{
			cout<<"="<<"\n";
		}
	}	

	return 0;
}