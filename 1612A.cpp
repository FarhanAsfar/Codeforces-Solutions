#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ios::sync_with_stdio(false),cin.tie(NULL);

	int t,x,y,d;
	cin>>t;

	while(t--){
		cin>>x>>y;

		if((x+y)%2==1){
			cout<<-1<<" "<<-1<<"\n";
		}
		else if(x==0&&y==0){
			cout<<0<<" "<<0<<"\n";
		}
		else{
			d = (x+y)/2;
			if(x>y){
				cout<<d<<" "<<0<<"\n";
			}else{
				cout<<0<<" "<<d<<"\n";
			}
		}
	}	

	return 0;
}//AC