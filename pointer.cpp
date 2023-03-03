#include <bits/stdc++.h>
using namespace std;
int main()
{
	/*#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif*/

	int x=20, y=50;
	int *p, *q;
	p = &x;
	q = &y;
	cout<<x<<" "<<y<<"\n";

	*p = *p+50;
	cout<<x<<" "<<y<<"\n";

	*q = *q+25;
	cout<<x<<" "<<y<<"\n";

	*p = *q +35;
	cout<<x<<" "<<y<<"\n";

	p = &y;
	q = &x;
	cout<<x<<" "<<y<<"\n";



	return 0;
}