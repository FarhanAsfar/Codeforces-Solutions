#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	long long n,c, f=0, o=0;
	cin>>n;
	long long arr[n];

	for(int i=0;i<n;i++){
		cin>>arr[i];
		if(arr[i]==5){
			f++;
		}else{
			o++;
		}
	}
	if(o==0){
		cout<<-1<<endl;
	}
	else if(f<9){
		cout<<0<<endl;
	}
	else{
		for(int i=f;i>=1;i--){
			c = f*5;
			if(c%9==0){
				for(int i=0;i<f;i++){
					cout<<5;
				}
				for(int i=0;i<o;i++){
					cout<<0;
				}
				break;
			}
			f--;
		}
	}
	//accepted.

	return 0;
} 