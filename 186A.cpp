#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	string s1,s2;
	cin>>s1>>s2;

	int count=0;
	bool flag=false;
	std::vector<int> v;

	for(int i=0;i<s1.length();i++){
		if(s1[i]!=s2[i]){
			v.push_back(i);
			count++;
		}
	}
	if(s1.length()!=s2.length()){
		cout<<"NO"<<endl;
	}
	else if(count>2){
		cout<<"NO"<<endl;
	}
	else{
		for(int i=0;i<s1.length();i++){
			swap(s1[i],s1[v[0]]);
			if(s1==s2){
				flag=true;
				break;
			}
			swap(s1[i],s1[v[0]]);
		}
		if(flag==true){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
	//Accepted.

	return 0;
} 