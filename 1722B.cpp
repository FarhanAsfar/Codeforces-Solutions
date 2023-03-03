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

	while(t--){
		string s1,s2;
		cin>>n;
		cin>>s1>>s2;
		bool flag=false;

		for(int i=0;i<n;i++){
			if(s1[i]=='R' && (s2[i]=='G'||s2[i]=='B')){
				//cout<<"NO"<<endl;
				flag=true;
				break;
			}
			else if(s2[i]=='R' && (s1[i]=='G'||s1[i]=='B')){
				//cout<<"NO"<<endl;
				flag=true;
				break;
			}
		}
		if(flag==true)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;
	}

	//Accepted

	return 0;
} 