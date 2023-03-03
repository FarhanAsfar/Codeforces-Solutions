#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n,k,l,c,d,p,nl,np;
	//n=freinds, k=bottles, l=mL(drink), c=limes
	//d=slices, p=salt, nl=needed mL
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;

	int have = k*l;
	int e = have/nl;
	int elime = c*d;
	int esalt = p /(np);

	

	int r = min(e, min(elime,esalt)) / n;

	cout<<r;

//accepted
	return 0;
}