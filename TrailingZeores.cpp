#include <bits/stdc++.h>
using namespace std;

int trailing(int n){
	int count = 0;

	while(n>0){
		count += n/5;
		n/=5;
	}
	return count;
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t,q;
	cin>>t;
	int cases=1;
	while(t--){
		int left=0,right=1e9;
		int mid, result;
		cin>>q;

		while(left<=right){
			mid = (left+right)/2;

			if(trailing(mid)>=q){
				result = mid;
				right = mid-1;
			}else{
				left = mid+1;
			}
		}
		if(trailing(result)==q){
			cout<<"Case "<<cases<<":"<<" "<<result<<"\n";
		}else{
			cout<<"Case "<<cases<<":"<<" impossible"<<"\n";
		}
		cases++;
	}

	return 0;
}
/*
input: 
3
1
2
5
output:
Case 1: 5
Case 2: 10
Case 3: impossible
*/

