#include <bits/stdc++.h>
using namespace std;
const int N = 1e7;
vector<bool> isPrime(N,1);

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	isPrime[1] = false;

	for(int i=2;i<N;i++){
		if(isPrime[i] == true){
			for(int j=2*i; j<N; j+=i){
				isPrime[j] = false;
			} 
		}
	}
	int n;
	cin>>n; //print prime number till n.

	for(int i=1;i<=n;i++){
		if(isPrime[i] == true){
			cout<<i<<"\t is prime"<<endl;
		}
		else{
			cout<<i<<"\t is not prime"<<endl;
		}
	}

	return 0;
}