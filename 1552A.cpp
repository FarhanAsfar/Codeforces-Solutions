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
	string s,x;
	//int temp;

	while(t--){
		cin>>n>>s;
		x=s;
		sort(x.begin(), x.end());	
		int count=0;

		for(int i=0;i<n;i++){
			if(s[i]!=x[i]){
				count++;
			}
		}
		cout<<count<<"\n";
	}
	//cout<<count;
	//cout<<s.length()-count;
	

	return 0;
}