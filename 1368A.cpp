#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t,a,b,n;
	cin>>t;

	while(t--){
		cin>>a>>b>>n;
		int count=0;

		while(a<=n && b<=n){
			if(a<=b)
				a+=b;
			else
				b+=a;

			count++;
		}
		cout<<count<<"\n";
	}

	return 0;
}
/* 
>>5>>4>>100
1. 5 9
2. 14 9
3. 14 23
4. 37 23
5. 37 60
6. 97 60
7. 97 157 -->break.
*/