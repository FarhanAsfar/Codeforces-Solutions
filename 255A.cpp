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

	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int chest = 0;
	int biceps = 0;
	int backs = 0;

	for(int i=0;i<n;i+=3){
		chest += arr[i];
	}
	for(int i=1;i<n;i+=3){
		biceps += arr[i];
	}
	for(int i=2;i<n;i+=3){
		backs += arr[i];
	}
	int m = max(chest, max(biceps, backs));
	//cout<<chest<<" "<<biceps<<" "<<backs<<" "<<m<<endl;
	
	if(m==chest)
		cout<<"chest";
	else if(m==biceps)
		cout<<"biceps";
	else
		cout<<"back";

	//accepted.

	return 0;
} 