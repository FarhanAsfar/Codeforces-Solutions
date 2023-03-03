#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ios::sync_with_stdio(false),cin.tie(NULL);

	int n,p,q;
	cin>>n;
	int free=0;

	for(int i=0;i<n;i++){
		cin>>p>>q;
		if(q-p>=2){
			free++;
		}
	}	
	cout<<free;

	return 0;
}