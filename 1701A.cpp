#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t;
	cin>>t;

	while(t--){
		int arr[2][2];
		int zero=0, one=0;

		for(int i=0;i<2;i++){
			for(int j=0;j<2;j++){
				cin>>arr[i][j];
				if(arr[i][j]==0){
					zero++;
				}else{
					one++;
				}
			}
		}
		if(zero==4){
			cout<<0<<endl;
		}
		else if(one==4){
			cout<<2<<endl;
		}
		else{
			cout<<1<<endl;
		}
	}

	return 0;
} 