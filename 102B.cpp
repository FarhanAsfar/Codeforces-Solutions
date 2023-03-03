#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	string n;
	cin>>n;

	int count=0, sum=11;

	if(n.length()<2){
		cout<<0;
	}
	else{
		while(sum>=10){
			sum=0;
			for(int i=0;i<n.length();i++){
				sum+= n[i]-'0';
			}
			n = to_string(sum);
			count++;
		}
		cout<<count;
	}

	return 0;
	//ACCEPTED
} 