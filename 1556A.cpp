#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t,c,d;
	cin>>t;

	while(t--){
		cin>>c>>d;

		if(c!=0 && c==d){
			cout<<"1"<<"\n";
		}
		else if(c==0 && d==0){
			cout<<"0"<<"\n";
		}
		else if(abs(c-d)>=2 && abs(c-d)%2==0){
			cout<<"2"<<"\n";
		}
		else{
			cout<<"-1"<<"\n";
		}
	}

	return 0;
}