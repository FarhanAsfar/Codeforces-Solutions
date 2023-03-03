#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ios::sync_with_stdio(false),cin.tie(NULL);

	int t,n;
	cin>>t;	

	while(t--){
		cin>>n;
		int arr[n],zero[n],one[n];
		int z=0,o=0,length=0,d=0;

		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		for(int i=0;i<n;i++){
			if(arr[i]==0){
				zero[z] = i;
				z++;
			}
			else{
				one[o] = i;
				o++;
			}
		}
		if(z>1){
			for(int i=0;i<z;i++){
				//cout<<zero[i]<<" ";
				if(abs(zero[i]-zero[i+1])==1){
					d=-1;
					break;
				}
			}
		}
		int count=0;
		for(int i=0;i<o;i++){
			if(abs(one[i]-one[i+1])==1){
				count++;
			}	
		}
		//cout<<count<<"\n";
		if(d==-1){
			cout<<-1<<"\n";
		}
		else{
			if(z+o==1){
				if(arr[0]==1){
					cout<<2<<"\n";
				}else
				cout<<1<<"\n";
			}
			else{
				length = (count*5)+(o-count);
				cout<<length+1<<"\n";
			}
		}
	}

	return 0;
}