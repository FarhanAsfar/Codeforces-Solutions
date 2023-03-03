#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ios::sync_with_stdio(0),cin.tie(0);

	int two,three,five,six;
	cin>>two>>three>>five>>six;

	//for 256
	int mini = min(two, min(five,six));
	int count1=0,count2=0;

	for(int i=0;i<mini;i++){
		two--;
		five--;
		six--;
		count1++;
	}
	//cout<<count1;
	//cout<<two<<" "<<three<<"\n";

	int mini2 = min(two,three);

	//for 32
	for(int i=0;i<mini2;i++){
		two--;
		three--;
		count2++;
	} 
	//cout<<count2;

	cout<<(256*count1)+(32*count2);


	return 0;
}