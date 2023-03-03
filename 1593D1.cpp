#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ios::sync_with_stdio(false),cin.tie(NULL);

	long long t,n;
	cin>>t;

	while(t--){
		cin>>n;
		unordered_set<long long> s;
		long long arr[n],brr[n];

		for(int i=0;i<n;i++){
			cin>>arr[i];
			s.insert(arr[i]);
		}
		long long mini = *min_element(arr, arr+n);

		/*for(int i=0;i<n;i++){
			brr[i] = arr[i]-mini;
		}*/
		if(s.size()==1){
		    cout<<-1<<"\n";
		}
		else{
		  int gccd=0;
		
		    for(int i=0;i<n;i++){
		        long long k = arr[i]-mini;
			    gccd = gcd(gccd,k);
		    }
		    cout<<gccd<<"\n";
		}
	}	

	return 0;
}