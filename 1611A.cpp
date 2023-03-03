#include <iostream>
using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t;
	cin>>t;
	
	while(t--){
		string n;
		cin>>n;
		
		int l = n.length();
		
		bool flag=false;
		
		for(int i=0;i<l;i++){
			if(n[i]%2==0){
				flag=true;
			}
		}
		//cout<<flag<<endl;
		
		if(n[0]%2==0){
			cout<<1<<endl;
		}
		else if(n[l-1]%2==0){
			cout<<0<<endl;
		}
		else if(flag==true){
			cout<<2<<endl;
		}
		else{
			cout<<-1<<endl;
		}
		
	}
	
	
	return 0;
}
