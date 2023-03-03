#include <bits/stdc++.h>
using namespace std;

int nextPrime(int n);
bool isPrime(int n);

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n,m;
	cin>>n>>m;

	int f = nextPrime(n);
	//cout<<f<<"\n";

	if(f==m){
		cout<<"YES";
	}else{
		cout<<"NO";
	}


	return 0;
}
int nextPrime(int n){
	int x = n;
	bool found = false;

	while(!found){ //loop will be terminated when found=true.
		x++;
		if(isPrime(x)){
			found = true;
		}
	}
	return x;
}
bool isPrime(int n){

	for(int i=2;i<n;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}