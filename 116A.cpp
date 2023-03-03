#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n;
	cin>>n;
	int a,b,seat=0,mxst=0;

	for(int i=0;i<n;i++){
		cin>>a>>b;

		seat = seat-a+b;
		if(seat>mxst)
			mxst=seat;
	}
	cout<<mxst;
	
//accepted
	return 0;
}