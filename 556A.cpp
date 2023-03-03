#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ios::sync_with_stdio(0),cin.tie(0);

	int n,zero=0,one=0;
	cin>>n;
	string arr;
	cin>>arr;

	for(int i=0;i<n;i++){
		if(arr[i]=='0'){
			zero++;
		}else{
			one++;
		}
	}
	//cout<<zero<<" "<<one;
	if(zero==one){
		cout<<"0";
	}else if(abs(zero-one)==1){
		cout<<"1";
	}else{
		cout<<abs(zero-one);
	}


	return 0;
}