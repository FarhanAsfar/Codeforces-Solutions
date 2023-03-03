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
		cin>>n;
		int right=0, left=0;
		if(n%7==0){
			cout<<n<<"\n";
		}
		else{
			int x = n%10;
			int last = n-x;

			for(int i=last;i<last+10;i++){
				if(i%7==0){
					cout<<i<<"\n";
					break;
				}
			}
		}
	}
	//accepted

	return 0;
} 