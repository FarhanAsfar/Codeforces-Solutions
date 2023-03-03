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
	cin>>t;
	string kb,s;

	while(t--){
		cin>>kb>>s;
		int l = s.size();
		int arr[l],a=0;

		for(int i=0;i<l;i++){
			for(int j=0;j<26;j++){
				if(s[i]==kb[j]){
					//cout<<j+1<<" ";
					arr[a]=j+1;
					a++;
				}
			}
		}
		int time=0;
		for(int i=0;i<a-1;i++){
			//cout<<arr[i]<<" ";
			time+= abs(arr[i+1]-arr[i]);
			//cout<<time<<" ";
		}
		cout<<time<<"\n";
		
	}
	

	return 0;
}