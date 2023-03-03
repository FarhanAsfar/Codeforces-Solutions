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
		int arr[n],temp[n];

		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		int count=0,a=0;

		for(int i=0;i<n;i++){
			if(arr[i]%3==0){
				count++;
			}else{
				temp[a] = arr[i];
				a++;
			}
		}
		int one=0, two=0;
		for(int i=0;i<a;i++){
			//cout<<temp[i]<<" ";
			if(temp[i]%3==1){
				one++;
			}else{
				two++;
			}
		}
		//cout<<one<<" "<<two<<"\n";
		int m=0,p,q,x,y;
		m = min(one,two);
		p = one-m;
		q = two-m;
		x = p/3;
		y = q/3;
			
		cout<<count+m+x+y<<"\n";
	}

	return 0;
} 