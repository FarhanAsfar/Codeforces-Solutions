#include <bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	//srand(time(NULL));
	int n,t,x;
	cin>>t;
	string s;
	/*char c[26] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G',
                          'H', 'I', 'J', 'K', 'L', 'M', 'N',
                          'O', 'P', 'Q', 'R', 'S', 'T', 'U',
                          'V', 'W', 'X', 'Y', 'Z' };*/

    while(t--){
    	cin>>n;
    	
    	if(n==3){
			cout<<"EWU";
		}
		else if(n%3==0){
			for(int i=0;i<n/3;i++){
			cout<<"EWU";
			}
		}
		else{
			x = n-3;
			for(int i=0;i<x;i++){
				//s = s+ c[rand()%26];
				cout<<"A";
			}
			 cout<<s<<"EWU";
		}
		cout<<"\n";
    }

	return 0;
}