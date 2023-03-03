#include <bits/stdc++.h>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t,n;
    cin>>t;
    int even_odd[2000];

    while(t--){
        cin>>n;
        int arr[n];
        int e=0;

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
        	if(arr[i] % 2 == 0){
                even_odd[e++] = arr[i];
            }
        }
        for(int i=0;i<n;i++){
        	even_odd[e++] = arr[i];
        }
        /*for(int i=0;i<e;i++){
            cout<<even[i]<<" ";
        }
        for(int i=0;i<o;i++){
            cout<<odd[i]<<" ";
        }*/
        //cout<<"\n";
        int count=0; 
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(gcd(even_odd[i],2*even_odd[j])>1){
                    count++;
                }
            }
    	}
    	cout<<count<<"\n";
	}
	return 0;
	//accepted in cf
	//couldnt set the c++17 option	
}