#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

    int n,k;
    cin>>n>>k;

    char c = 96+k,i;

    for(i='a';i<=c;i++){
        cout<<i;
    }
    for( i=1;i<=n-k;i++){
        if(i%2!=0){
            cout<<"a";
        }
        if(i%2==0){
            cout<<"b";
        }
    }

	return 0;
}