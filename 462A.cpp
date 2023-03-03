#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n;
	cin>>n;
	char c[n][n];

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>c[i][j];
		}
	}
	bool e = true;

	for(int i=0;i<n;i++){
		int count=0;

		for(int j=0;j<n;j++){
			if(i-1>=0 && c[i-1][j]=='o'){
				count++;
			}
			if(i+1<n && c[i+1][j]=='o'){
				count++;
			}
			if(j-1>=0 && c[i][j-1]=='o'){
				count++;
			}
			if(j+1<n && c[i][j+1]=='o'){
				count++;
			}
			if(count%2==1){
				e = false;
			}
		}
	}
	if(e==true){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}


	return 0;
} 