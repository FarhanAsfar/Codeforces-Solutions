#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int test,n;
	cin>>test;

	while(test--){
		string s;
		cin>>n>>s;
		int one=0,zero=0;

		for(int i=0;i<n;i++){
			if(s[i]=='1'){
				one++;
			}else{
				zero++;
			}
		}
		if(n==1||(one==1&&zero==1)){
			cout<<"YES"<<"\n";
		}
		else{
			cout<<"NO"<<"\n";
		}
	}


	return 0;
} 