#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t,s;
    cin>>t;
    while(t--){
        cin >> s;

        int x = (int) sqrt(s);
        if (x*x < s)
        	x++;
       		cout<<x<< "\n";
    }


	return 0;
}