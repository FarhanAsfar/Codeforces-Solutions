#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	long long e,m,b,k;
	cin>>e>>m>>b;

	long long mini = min(e,(min(m,b)));

	//cout<<mini<<"\n";
	
		if(e>0 && m>0 && b>0){
			//e--;
			//m--;
			//b--;
			k = mini;
		}else{
			k = 0;
		}
		//cout<<k<<"\n";
	long long e1 = e - k;
	long long b1 = b - k;
	long long m1 = m - k;
	//cout<<e1<<"\n"<<b1<<"\n";
	//int y = min(e,b);
	long long p = e1/2;
	//cout<<p;
	//cout<<p<<" "<<b<<"\n";
	long long z = min(p,b1);
		
	//cout<<k<<" "<<e1<<" "<<b1<<" "<<m1<<" "<<z;
	cout<<k+z;

	return 0;
}