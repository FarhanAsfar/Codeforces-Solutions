#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ios::sync_with_stdio(false),cin.tie(NULL);

	int t,a,b,c,x,y;
	cin>>t;

	while(t--){
		cin>>a>>b;
		long long holda,holdb, mini=10e9,count=0;

		for(int i=0;i<30;i++){
			holda = a;
			holdb = b+i;
			count=i;
			if(b+i==1){
				continue;
			}

			while(holda){
				holda/=holdb;
				count++;
			}
			mini = min(count,mini);
		}
		
		cout<<mini<<"\n";

	}	

	return 0;
}