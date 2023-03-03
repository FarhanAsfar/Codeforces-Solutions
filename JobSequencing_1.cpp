#include <bits/stdc++.h>
using namespace std;

struct Jobs
{
	int jobNo;
	int profit;
	int deadline;
}joblist[100],temp;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n;
	cin>>n;
	int slot[n]={0};

	for(int i=0;i<n;i++){
		cin>>joblist[i].jobNo>>joblist[i].profit>>joblist[i].deadline;
	}

	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(joblist[i].profit < joblist[j].profit){
				temp = joblist[i];
				joblist[i] = joblist[j];
				joblist[j] = temp;
			}
		}
	}

	for(int i=0;i<n;i++){
		for(int j=joblist[i].deadline;j>=1;j--){
			if(slot[j]==0){
				slot[j]=j;
				break;
			}
		}
	}
	for(int i=0;i<n;i++){
		if(slot[i]){
			cout<<slot[i]<<" ";
		}
	}


	return 0;
} 