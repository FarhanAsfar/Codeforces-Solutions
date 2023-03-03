#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	/*int n;
	cin>>n;
	int arr[n];
	int ar[n],br[n],cr[n];
	int o=0, t=0, tt=0;

	for(int i=1;i<=n;i++){
		cin>>arr[i];
	}
	int len = sizeof(arr)/sizeof(arr[0]);

	int one = count(arr, arr+len, 1);	
	int two = count(arr, arr+len, 2);	
	int three = count(arr, arr+len, 3);
	cout<<len<<"\n";
	cout<<one<<" "<<two<<" "<<three<<"\n";

	int x = min(one, min(two,three));

	for(int i=1;i<=n;i++){
		if(arr[i]== 1){
			ar[o]==i;
			o++;
		}
		else if(arr[i] == 2){
			br[t]==i;
			t++;
		}
		else{
			cr[tt]==i;
			tt++;
		}
	}
	
	//sort(arr, arr+len);
	
	//cout<<one<<" "<<two<<" "<<three;	
	cout<<x<<"\n";
	if(x!=0){
		for(int i=1;i<=x;i++){
			cout<<ar[i]<<" "<<br[i]<<" "<<cr[i]<<"\n";
		}
	}*/


       int n,o=0,t=0,tt=0;
       cin>>n;
       int arr[n];
       int ar[n],br[n],cr[n];

       for(int i=1;i<=n;i++){
       		cin>>arr[i];
       }      

       for(int i=1;i<=n;i++){
       		if(arr[i]==1){
            	ar[o]=i;
            	o++;
            }
       		else if(arr[i]==2){
         		br[t]=i;
         		t++;
           }
       		else {
           		cr[tt]=i;
           		tt++;
       		}
       }
       int x=min(o,min(tt,t));

        /*int len = sizeof(arr)/sizeof(arr[0]);

		int one = count(arr, arr+len, 1);	
		int two = count(arr, arr+len, 2); 	
		int three = count(arr, arr+len, 3);

		int xx = min(one, min(two,three));*/

       cout<<x<<"\n";
       if(x!=0){
            for(int i=0;i<x;i++){
                cout<<ar[i]<<" "<<br[i]<<" "<<cr[i]<<" "<<"\n";
            }
        }

        //accepted.

	return 0;
}