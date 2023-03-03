#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int k,count=0;
	string s;
	char x;
	cin>>k>>s;

	sort(s.begin(), s.end());

	for(int i=0;i<s.length();i++){
		if(i%k==0){
			x=s[i];
		}
		if(s[i]==x){
			count++;
		}
	}
	if(s.length()==count && count%k==0){
		for(int i=0;i<k;i++){
			for(int j=0;j<s.length();j+=k){
				cout<<s[j];
			}
		}
	}
	else{
		cout<<"-1";
	}


	return 0;
}