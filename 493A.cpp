#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ios::sync_with_stdio(0),cin.tie(0);

	int fouls;
	string home,away,side;
	cin>>home>>away>>fouls;

	int minute,jersey,card;

	for(int i=0;i<fouls;i++){
		cin>>minute>>side>>jersey>>card;
	}


	return 0;
}