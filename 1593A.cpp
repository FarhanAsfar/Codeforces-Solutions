#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t,a,b,c;
	cin>>t;

	while(t--){
		cin>>a>>b>>c;
		int m = max(a,max(b,c));

		if(a==b && b==c){
			cout<<"1 "<<"1 "<<"1";
		}
		else if((a==b)&&(a==m) || (a==c)&&(a==m) || (b==c)&&(b==m)){
			if(m-a==0){
				cout<<1<<" ";
			}else{
				cout<<(m-a)+1<<" ";
			}
			if(m-b==0){
				cout<<1<<" ";
			}else{
				cout<<(m-b)+1<<" ";
			}
			if(m-c==0){
				cout<<1<<" ";
			}else{
				cout<<(m-c)+1<<" ";
			}
		}
		else{
			if(m-a==0){
			cout<<"0 ";
		}else{
			cout<<(m-a)+1<<" ";
		}
		if(m-b==0){
			cout<<"0 ";
		}else{
			cout<<(m-b)+1<<" ";
		}
		if(m-c==0){
			cout<<"0 ";
		}else{
			cout<<(m-c)+1<<" ";
		}
		}
		
		cout<<"\n";
	}	

	return 0;
}