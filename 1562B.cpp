#include <bits/stdc++.h>
using namespace std;
void solve();
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ios::sync_with_stdio(0),cin.tie(0);

	int t;
	cin>>t;

	while(t--){
		solve();
	}
	return 0;
}

bool isPrime(int p){
	if(p<2)
		return false;
	for(int i=2;i<p/2;i++){
		if(p%i==0){
			return false;
		}
	}
	return true;
}

void solve(){
	int n;
	string s;
	cin>>n>>s;

	for(int i=0;i<n;i++){
		if(s[i]=='1'||s[i]=='4'||s[i]=='6'||s[i]=='8'||s[i]=='9'){
			cout<<"1"<<"\n"<<s[i]<<"\n";
			return;
		}
	}

	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			int n = s[i]-'0';
			n = n*10 + s[j]-'0';

			if(isPrime(n)==0){
				cout<<2<<"\n"<<n<<"\n";
				return;
			}
		}
	}
}