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

	if(n<=5){
		cout<<"1";
	}
	else{
		if(n%5==0){
			cout<<n/5;
		}else{
			cout<<n/5 +1;
		}
	}


	return 0;
}