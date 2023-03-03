#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t,n,x;
	cin>>t;

	while(t--){
		cin>>n;
		int arr[n], hold[n];

		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		string s;
		int u=0, d=0, c=0;

		for(int i=0;i<n;i++){
			cin>>x>>s;
			u=0, d=0, c=0;
			for(int j=0;j<s.length();j++){
				if(s[j]=='U'){
					u++;
				}else{
					d++;
				}
			}
			c = arr[i]+d-u;
			if(c>9){
				hold[i]=c-10;
			}
			else if(c<0){
				hold[i]=c+10;
			}
			else{
				hold[i]=c;
			}
			//cout<<u<<" "<<d<<endl;
		}
		for(int i=0;i<n;i++){
			cout<<hold[i]<<" ";
		}
		cout<<endl;
	}

	return 0;
} 