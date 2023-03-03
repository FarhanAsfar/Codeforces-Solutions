#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n;
	cin>>n;
	int arr[n];
	double sum=0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		sum += arr[i];
	}
	double avg = sum/n;
	cout<<fixed<<setprecision(12)<<avg;
	


	return 0;
}