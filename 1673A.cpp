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
		string s;
		cin>>s;
		int l = s.length();

		int sum1=0, sum2=0, sumA=0;
		int x1=s[0]-'a'+1;
		int x2=s[l-1]-'a'+1;

		for(int i=1;i<l;i++){
			sum1+=s[i]-'a'+1;
		}
		for(int i=0;i<l-1;i++){
			sum2+=s[i]-'a'+1;
		}

		if(l==1){
			cout<<"Bob "<<s[0]-'a'+1<<"\n";
		}

		else if(l%2==0){
			for(int i=0;i<l;i++){
				sumA+=s[i]-'a'+1;
			}
			cout<<"Alice "<<sumA<<"\n";
		}
		else{
			if(sum1>sum2){
				cout<<"Alice "<<sum1-x1<<endl;
			}else{
				cout<<"Alice "<<sum2-x2<<endl;
			}
		}	
	}
	//Accepted

	return 0;
} 