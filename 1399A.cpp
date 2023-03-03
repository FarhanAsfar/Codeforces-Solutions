#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ios::sync_with_stdio(false),cin.tie(NULL);

	int t,c,n;
    cin>>t;
    while(t--){
        c=0;
        cin>>n;
        int arr[n];

        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        //sort(arr,arr+n);

        for(int i=1; i<n; i++){
            if(abs(arr[i]-arr[i-1])>1){
                c++;
                cout<<"NO"<<"\n";
                break;
            }
        }
        if(c==0)
            cout<<"YES"<<"\n";
    }	

	return 0;
}