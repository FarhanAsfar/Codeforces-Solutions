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
	string s,even,odd,decode;
	cin>>n>>s;

	for(int i=0;i<n;i++){
		if(i%2==0){
			even+=s[i];
		}else{
			odd+=s[i];
		}
	}
	if(n%2==0){
		reverse(even.begin(),even.end());
		decode = even+odd;
	}
	else{
		reverse(odd.begin(),odd.end());
		decode = odd+even;
	}
	cout<<decode;

	return 0;
}//AC