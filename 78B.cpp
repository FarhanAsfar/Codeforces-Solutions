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
	string s ="ROYGBIV";

	if(n%7==0){
		for(int i=0;i<n/7;i++){
			cout<<s;
		}
	}
	else{
		int x = n-7*(n/7);
		for(int i=0;i<n/7;i++){
			cout<<s;
		}
		if(x==1){
			cout<<"G";
		}else if(x==2){
			cout<<"GB";
		}else if(x==3){
			cout<<"YGB";
		}else if(x==4){
			cout<<"YGBI";
		}else if(x==5){
			cout<<"OYGBI";
		}else if(x==6){
			cout<<"OYGBIV";
		}
	}

	return 0;
}//AC