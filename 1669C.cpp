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
		int a, e=0, o=0;
		int even[n], odd[n];

		for(int i=0;i<n;i++){
			cin>>a;
			if(i%2==0){
				odd[o] = a;
				o++;
			}
			else{
				even[e] = a;
				e++;
			}
		}

		//bool Eflag=true, Oflag=true;
		int c1=0, c2=0, c3=0, c4=0;

		for(int i=0;i<o;i++){
			//cout<<odd[i]<<" ";
			if(odd[i]%2==0)
				c1++;
			else
				c2++;
		}
		//cout<<endl;
		for(int i=0;i<e;i++){
			//cout<<even[i]<<" ";
			if(even[i]%2==0)
				c3++;
			else
				c4++;
		}
		//cout<<e<<" "<<c2<<endl;
		//cout<<o<<" "<<c1<<endl;
		if(c1>=1 && c2>=1)
			cout<<"NO\n";
		else if(c3>=1 && c4>=1)
			cout<<"NO\n";
		else
			cout<<"YES\n";

	}
	//Accepted

	return 0;
} 