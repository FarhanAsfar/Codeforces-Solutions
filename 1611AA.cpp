#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ios::sync_with_stdio(false),cin.tie(NULL);

	int t;
	int n;
	cin>>t;

	while(t--){
		cin>>n;
		int r=n;
		int x,c=0;
		
		/*while(r!=0){
			x = r%10;
			if(x%2==0){
				c++;
				break;
			}
		}*/
		
		int l = floor(log10(n) + 1);
		int d = log10(n);
		int f = (n/pow(10,d));

		cout<<l0;

		
	}	

	return 0;
}