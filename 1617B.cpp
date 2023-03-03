#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
	if(a%b==0)
		return b;
	else
		return gcd(b, a%b);
}

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t,n,a,b;
	cin>>t;

	while(t--){
		cin>>n;
		int x = n-1;
		if(x%2==1){
			a = x/2;
			b = (x/2)+1;

			cout<<a<<" "<<b<<" "<<1<<"\n";
		}
		else{
			for(int i=2;i<n;i++){
				a = i;
				b = n-i-1;
				int f = gcd(a,b);
				if(f==1){
					break;
				}
			}
			cout<<a<<" "<<b<<" "<<1<<"\n";
		}
	}

	return 0;
} 