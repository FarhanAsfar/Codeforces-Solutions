#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t,n;
	cin>>t;

	while(t--){
		cin>>n;
		int count=0,search=0;
		//int mod = n%10;

		while(search!=n){
			count++;
			if(count%3 != 0 && (count%10)!=3){
				search++;
			}
			//cout<<count<<"\n";
		}
		cout<<count<<"\n";

	}


	return 0;
}