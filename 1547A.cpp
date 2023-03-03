#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t,xa,ya,xb,yb,xf,yf;
	cin>>t;
	//cout<<"\n";
	int colp;

	while(t--){
		cin>>xa>>ya;
		cin>>xb>>yb;
		cin>>xf>>yf;

		colp = abs(xa-xb)+abs(ya-yb);

		if((xa == xb) && (xf==xa) && ((ya>yf && yf>yb) ||(ya<yf && yf<yb) ) ){
			colp = colp+2;
		}
		else if( (ya==yb) && (yb==yf) && ((xa<xf && xf<xb) || (xa>xf && xf>xb)) ){
			colp = colp+2;
		}
		cout<<colp<<"\n";

	}
	//accpeted
		return 0;
}