#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	long long t,n,x,y,z,tx,ty,tz;
	cin>>t;

	while(t--){
		cin>>n;
		
		x = n/6;
		if(n%6==0){
			tx = x*15; 
		}else{
			tx = x*15+15;
		}

		y = n/8;
		if(n%8==0){
			ty = y*20; 
		}else if(y*8+6 >= n){
			ty = y*20 + 15;
		}
		else{
			ty = y*20+20;
		}

		z = n/10;
		if(n%10==0){
			tz = x*25; 
		}else if(z*10+6>=n){
			tz = x*25+15;
		}
		else{
			tz = z*25+25;
		}

		cout<<min(tx, min(ty,tz))<<"\n";
		

	}


	return 0;
}