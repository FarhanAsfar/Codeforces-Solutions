#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ios::sync_with_stdio(0),cin.tie(0);

	int hs,ms,ht,mt;	//hs/ms=current hour; ht/mt=sleep time
	char c;

	cin>>hs>>c>>ms;
	cin>>ht>>c>>mt;
	
	int bedH, bedM;
	bedH = hs-ht;
	bedM = ms-mt;

	cout<<bedH<<" "<<bedM;


	return 0;
}