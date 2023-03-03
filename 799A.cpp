#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	/*string s,x;
	x = "WUB";
	getline(cin, s);

	//string::size_type i = s.find(x);
	//int i=s.find(x);

	while(s.find(x) != string::npos){
		s.erase(s.find(x), x.length());

	}
	cout<<s<<" ";*/
	string s,x;
	cin>>s;
	x=s;
	reverse(x.begin(), x.end());
	if(x==s)
		cout<<"palindrome";
	else
		cout<<"not palindrome";
	

	//confusing 

	return 0;
}