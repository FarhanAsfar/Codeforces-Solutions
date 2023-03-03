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
	if(n>2){
		for(int i=n;i>=1;i--){
			cout<<i<<" ";
		}
	}
	else if(n==1 || n==2){
		cout<<"-1";
	}

//accepted
	return 0;
}