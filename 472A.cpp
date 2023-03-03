#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ios::sync_with_stdio(false),cin.tie(NULL);

	int n;
	cin>>n;

	if(n%2==0){
		cout<<"4 "<<n-4;
	}
	else{
		cout<<"9 "<<n-9;
	}

	return 0;
}