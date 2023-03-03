#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ios::sync_with_stdio(false),cin.tie(NULL);

	string x,y,z;
	cin>>x>>y>>z;

	if((x=="A>B"||x=="B<A") && (y=="B>C"||y=="C<B") && (z=="C>A"||z=="A<C")){
		cout<<"Impossible";
	}
	else if((x=="A>B"||x=="B<A") && (y=="B<C"||y=="C>B") && (z=="C>A"||z=="A<C")){
		cout<<"BAC";
	}
	else if((x=="A>B"||x=="B<A") && (y=="B<C"||y=="C>B") && (z=="C<A"||z=="A>C")){
		cout<<"BCA";
	}
	else if((x=="A>B"||x=="B<A") && (y=="B>C"||y=="C<B") && (z=="C<A"||z=="A>C")){
		cout<<"CBA";
	}


	else if((x=="A<B"||x=="B>A") && (y=="B<C"||y=="C>B") && (z=="C<A"||z=="A>C")){
		cout<<"Impossible";
	}
	else if((x=="A<B"||x=="B>A") && (y=="B>C"||y=="C<B") && (z=="C>A"||z=="A<C")){
		cout<<"ACB";
	}
	else if((x=="A<B"||x=="B>A") && (y=="B<C"||y=="C>B") && (z=="C>A"||z=="A<C")){
		cout<<"ABC";
	}
	else if((x=="A<B"||x=="B>A") && (y=="B>C"||y=="C<B") && (z=="C<A"||z=="A>C")){
		cout<<"CAB";
	}


	return 0;
}