#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n,t;
	cin>>t;

	while(t--){
		cin>>n;
		int a=0,b=0,c=0;
		
		for(int i=1;i<=n;i++){
			a=i;
			c = (n-a)/2;
			b = n-(a+c);
			
			if(c>1 && a>b+1){
				c--;
				b++;
			}
			if(a>b && b>c){
				cout<<b<<" "<<a<<" "<<c<<endl;
				break;
			}
		}
	}

	return 0;
} 