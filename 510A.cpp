#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ios::sync_with_stdio(false),cin.tie(NULL);

	int n,m;
	cin>>n>>m;
	
	for(int i=1;i<=n;i++){
		if(i%4==0){
			cout<<"#";
			for(int j=2;j<=m;j++){
				cout<<".";
			}
		}
		else if(i%2==0){
			for(int j=1;j<m;j++){
				cout<<".";
			}
			cout<<"#";
		}
		else{
			for(int j=1;j<=m;j++){
				cout<<"#";
			}
		}
		cout<<"\n";
	}

	return 0;
}