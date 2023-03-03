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
	    string kd;
		cin>>kd;
		int r,g,b;
		int count=0;
		
		for(int i=0;i<kd.length();i++){
			if(kd[i]=='r'){
				r = i;
			}
			else if(kd[i]=='g'){
				g = i;
			}
			else if(kd[i]=='b'){
				b = i;
			}
		}
		
		for(int i=0;i<r;i++){
			if(kd[i]=='R'){
				count++;
				break;
			}
		}
		for(int i=0;i<g;i++){
			if(kd[i]=='G'){
				count++;
				break;
			}
		}
		for(int i=0;i<b;i++){
			if(kd[i]=='B'){
				count++;
				break;
			}
		}
		if(count==0){
			cout<<"YES"<<"\n";
		}
		else{
			cout<<"NO"<<"\n";
		}
		
	}


	return 0;
} 