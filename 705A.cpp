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

	for(int i=1;i<=n;i++){
		if(i%2==0){
			cout<<"I love";
		}
		else{
			cout<<"I hate";
		}
		if(i==n){
			cout<<" it";
		}else{
			cout<<" that ";
		}
	}
	

	return 0;
}