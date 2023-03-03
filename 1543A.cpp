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
	long long a,b,x,y,z,d,c,k,v;
	int count=0;

	while(t--){
		cin>>a>>b;
        
		if(a==b){
			cout<<"0"<<" "<<"0";
		}
		else if(abs(a-b)==1){
			cout<<"1"<<" "<<"0";
		}
		else{
			x = abs(a-b);
			y = min(a,b);
			k = y%x;
			c = x - k;

			if(k>c){
				c = x-k;
			}
				z = x;
				v = c;
			
			cout<<z<<" "<<v; 
		}
		cout<<"\n";
	}




	return 0;
}