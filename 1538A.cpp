#include <bits/stdc++.h>
using namespace std;
//stone game
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	/*int t,n,ma,maindx,mi,miindx;
	cin>>t;

	while(t--){
		cin>>n;
		int arr[n];

		for(int i=0;i<n;i++){
			cin>>arr[i];
		}

		//int len = sizeof(arr)/sizeof(arr[0]);
		//int min = min_element(arr, arr+len)-arr;
		//int max = max_element(arr, arr+len)-arr;
		//int left=0, right=n-1;

		ma = arr[0];
		mi = arr[0];
		maindx = 0;
		miindx = 0;
		//int moveMi=0,moveMa=0;

		for(int i=0;i<n;i++){
			if(arr[i]>ma){
				maindx = i;
				ma = arr[i];
			}
			if(arr[i]<mi){
				miindx = i;
				mi = arr[i];	
			}
		}
		//cout<<mi<<" "<<ma<<" ";
		//cout<<miindx<<" "<<maindx<<"\n";

		/*if((miindx-left==0 || miindx-right==0) && (maindx-left==0 || maindx-right==0)){
			moveMi = 1;
		}
		if(abs(miindx-maindx)==1){
			moveMi = moveMa = 1;
		}
		if(abs(miindx-left) < abs(miindx-right)){
			moveMi = abs(miindx - left)+1;
		}
		else if(abs(miindx-right) < abs(miindx-left)){
			moveMi = abs(miindx -right)+1;
		}
		
		if(abs(maindx-miindx) < abs(maindx-left) && abs(maindx-miindx) < abs(maindx-right)){
			moveMa = abs(maindx - miindx);
		}
		
		else if(abs(maindx-left) < abs(maindx-right)){
			moveMa = abs(maindx - left)+1;
		}
		else if(abs(maindx-right) < abs(maindx-left)){
			moveMa = abs(maindx - right)+1;
		}

		cout<<moveMa+moveMi<<"\n";
		//cout<<moveMi<<" "<<moveMa<<"\n";
		int m1 = max(ma, mi)+1;
		int m2 = max(n-ma, n-mi);
		int m3 = min(ma, mi)+1+n-max(ma,mi);
		int a = min((min(m1,m2)), m3);
		cout<<a<<"\n";
	}*/
	int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int mi=101;
        int Ma=-1;
        int x,y;
        
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]>Ma)
            {
                Ma=arr[i];
                x=i;
 
            }
            if(arr[i]<mi)
            {
                mi=arr[i];
                y=i;
            }
        }
        //cout<<x<<" "<<y<<"\n";
        int m1=max(x,y)+1;
        int m2=max(n-x,n-y);
        int m3=min(x,y)+1+n-max(x,y);
        int ans=min((min(m1,m2)),m3);
        cout<<ans<<endl;
 
    }
	return 0;
}