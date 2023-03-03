#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int petr, pfare, driver, dfare;
	cin>>petr>>pfare>>driver>>dfare;

	while(driver>petr){
		petr+=pfare;
		driver-=dfare;
		cout<<petr<<" "<<driver<<"\n";
	}
	//cout<<petr;


	return 0;
} 