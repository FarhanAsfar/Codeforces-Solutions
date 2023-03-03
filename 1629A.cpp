#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n,k;
	cin>>t;

	while(t--){
	    cin>>n>>k;
	    int sum=k;
	    pair<int, int> arr[n];

	    for(int i=0;i<n;i++){
	        cin>>arr[i].first;
	    }
	    for(int i=0;i<n;i++){
	        cin>>arr[i].second;
	    }
	    sort(arr,arr+n);


	   for(int i=0;i<n;i++){
	       if(sum>=arr[i].first){
                sum+=arr[i].second;
	       }
	       else{
            break;
	       }
	   }
	   cout<<sum<<"\n";

	}

	return 0;
}
