#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	string a,b;
	cin>>a>>b;
	int x=0,y=0;

	//sort(a.begin(), a.end());
	//sort(b.begin(), b.end());
	int subA,subB;

	//cout<<a.length()<<" "<<b.length();
	if((a.compare(b))==0){
		cout<<"-1";
	}
	else if((a.compare(b)) != 0){
		subA = a.length();
		subB = b.length();

		if(subA>subB)
			cout<<subA;
		else
			cout<<subB;
	}
	
	//accepted.

	return 0;
}