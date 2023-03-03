#include <bits/stdc++.h>
using namespace std;
//Codeforces LATOKEN Round 1 (Div. 1 + Div. 2)
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t,r,c;
	cin>>r>>c;
	char arr[60][60];

	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>arr[i][j];
		}
	}
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<"\n";
	}


	return 0;
}