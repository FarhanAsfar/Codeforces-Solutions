#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int k,l,m,n,d;
	cin>>k>>l>>m>>n>>d;

	int count=0;
	for(int i=1;i<=d;i++){
		if(i%k!=0 && i%l!=0 && i%m!=0 && i%n!=0){
			count++;
		}
	}
	if(count==0)
		cout<<d;
	else{
		cout<<d-count;
	}
//accepted

	return 0;
}