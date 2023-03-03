#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t;
	cin>>t;

	while(t--){
		int x,y,a,b;
		cin>>x>>y;
		int d = y/x;

		if(x>y){
			cout<<0<<" "<<0<<endl;
		}
		else if(y%x==0){
			cout<<1<<" "<<d<<endl; 
		}
		else{
			cout<<0<<" "<<0<<endl;
		}

	}

	return 0;
} 