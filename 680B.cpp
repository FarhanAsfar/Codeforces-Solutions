#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int city,limak;
	cin>>city>>limak;

	int arr[city];
	int criminal=0,dis1=0,dis2=0;

	for(int i=1;i<=city;i++){
		cin>>arr[i];
	}
	/*criminal= accumulate(arr,arr+city,0);

	for(int i=1;i<=limak;i++){
		if( (arr[limak+i] + arr[limak-i]) == 1){
			criminal--;
		}
	}*/
	for(int i=1;i<=city;i++){
		if(arr[i]){
			dis1 = i-limak;
			dis2 = limak-dis1;
			if(dis2<1 || dis2>city || arr[dis2]==arr[i]){
				criminal++;
			}
		}
	}
	cout<<criminal;

	//accepted.
	return 0;
} 