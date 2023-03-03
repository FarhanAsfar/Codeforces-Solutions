#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	long long n,k,x,y;
    cin>>n>>k;
    x = (n+1)/2;
    if(k<=x){
        cout<<(k*2)-1;
    }else{
        y = ((k)-(n+1)/2)*2;
        cout<<y;
    }
    //accepted 

	/*long long n,k;
	cin>>n>>k;
	long long arr[n],newa[n];
	long long odd[n],eve[n];
	int o=0,e=0,p=0;
	for(int i=1;i<=n;i++){
		arr[i] = i;
		if(arr[i]%2==0){
			eve[e++]=arr[i];
		}
		else{
			odd[o++]=arr[i];
		}
	}
	
	for(int i=0;i<o;i++){
		newa[p++]=odd[i];
	}
	for(int i=0;i<o;i++){
		newa[p++]=eve[i];
	}
	for(int i=0;i<p;i++){
		cout<<newa[k-1]<<" ";
		break;
	}*/
	//cout<<"\t"<<newa[k-1];
	

	return 0;
}