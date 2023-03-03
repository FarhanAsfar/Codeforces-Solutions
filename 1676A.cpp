#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t;
	cin>>t;

	while(t--){
		string n;
		cin>>n;

		int sum=0, sum1=0;

		for(int i=0;i<3;i++){
			sum+=n[i];
		}
		for(int i=3;i<=5;i++){
			sum1+=n[i];
		}
		if(sum==sum1)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}

	return 0;
} 