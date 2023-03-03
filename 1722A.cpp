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
	string s, str="Timur";
	sort(str.begin(), str.end());
	
	while(t--){
		cin>>n>>s;

		sort(s.begin(), s.end());

		if(s==str){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
		//cout<<s<<"\t"<<str<<endl;
	}

	//Accepted

	return 0;
} 