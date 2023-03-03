#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t,n,x;
	cin>>t;

	while(t--){
		cin>>n;
		int arr[10]={};

		for(int i=0;i<n;i++){
			cin>>x;
			arr[x%10]++;
		}
		std::vector<int> v;

		for(int i=0;i<10;i++){
			for(int j=0;j<min(arr[i],3);j++){
				v.push_back(i);
			}
		}
		int s = v.size();

		int sum=0,c=0;
		for(int i=0;i<s;i++){
			for(int j=i+1;j<s;j++){

				for(int k=j+1;k<s;k++){

					sum = v[i]+v[j]+v[k];
					if(sum%10==3){
						c=1;
						break;
					}
				}
			}
		}
		if(c==1)
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;
	}

	//Accepted

	return 0;
} 