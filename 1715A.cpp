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
	int a[n];

	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int m, mini, maxi;
    mini = distance(a, max_element(a,a+n));//index of max element
    m = min_element(a,a+n)-a;
    maxi = a[max_element(a, a+n)-a];
    cout<<m<<endl;
    cout<<"min = "<<mini<<", max = "<<maxi;

	return 0;
} 