#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	long long n,x,d;
	cin>>n>>x;
	char c;
	long long t = x+0;
	long long distress=0;

	while(n--){
		
		cin>>c>>d;

		if(c=='+'){
			t+=d;
		}
		else if(t>=d){
			t-=d;
		}
		else{
			distress++;
		}
	}
	cout<<t<<" "<<distress<<"\n";


	return 0;
}