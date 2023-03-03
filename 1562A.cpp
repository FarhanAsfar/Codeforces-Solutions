#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	long long t,l,r,d,m1;
	cin>>t;

	while(t--){
		cin>>l>>r;
		//a = max(l,r);
		//b = min(l,r);
		if(l==1 && r==2){
			cout<<"0"<<"\n";
		}
		else if(l==r){	
			cout<<"0"<<"\n";
		}
		else if(abs(l-r)==1){
			cout<<"1"<<"\n";
		}
		else{
			d = (r/2)+1; 
			if(d>=l && d<=r){
				m1 = r%d;
				cout<<m1<<"\n";	
			}
			else{
				cout<<r-l<<"\n";
			}
		}
	}
	//missed the test case 1 & 2
	/*my version of this code is required to check the 
	test case 1&2 manually */


	return 0;
}