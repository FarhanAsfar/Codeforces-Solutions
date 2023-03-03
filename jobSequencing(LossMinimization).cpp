#include <iostream>
using namespace std;

struct job{
	double Ti, Li, TL, Id;
}joblist[100],temp;

int main() {
	// your code goes here
	int n;
	cin>>n;
	
	for(int i=0;i<n;i++){
		joblist[i].Id = i+1;
		cin>>joblist[i].Li;
	}
	for(int i=0;i<n;i++){
		cin>>joblist[i].Ti;
		joblist[i].TL = joblist[i].Li / joblist[i].Ti;
	}
	
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(joblist[i].TL<joblist[j].TL){
				temp = joblist[i];
				joblist[i] = joblist[j];
				joblist[j] = temp;
			}
			else if(joblist[i].TL==joblist[j].TL){
				if(joblist[i].Ti>joblist[j].Ti){
					temp = joblist[i];
					joblist[i] = joblist[j];
					joblist[j] = temp;
				}
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<joblist[i].Id<<" ";
	}
	
	
	return 0;
}