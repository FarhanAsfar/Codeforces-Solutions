#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ios::sync_with_stdio(0),cin.tie(0);

	int days;
	cin>>days;
	int kg[days], price[days];

	for(int i=0;i<days;i++){
		cin>>kg[i]>>price[i];
	}

	int base_price = price[0];
	int min_price=0;

	for(int i=0;i<days;i++){
		if(base_price>price[i]){
			base_price=price[i];
		}
		min_price=min_price+(kg[i]*base_price);
	}
	cout<<min_price;



	return 0;
}