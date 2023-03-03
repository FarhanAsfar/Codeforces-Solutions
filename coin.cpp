    #include <bits/stdc++.h>
    using namespace std;
    int main()
    {
    	#ifndef ONLINE_JUDGE
    	freopen("input.txt", "r", stdin);
    	freopen("output.txt", "w", stdout);
    	#endif
     
    	int n,t;
    	cin>>t;
    	int temp;
    	while(t--){
    		cin>>n;
    		int arr[n];
    		for(int i=0;i<n;i++){
    			cin>>arr[i];
    		}

    		for(int i=0;i<n;i++){
    			for(int j=0;j<n-i-1;j++){
    				if(arr[j]<arr[j+1]){
	    				temp = arr[j];
	    				arr[j] = arr[j+1];
	    				arr[j+1] = temp;
    			}
    			}
    		}
    		
    		for(int j=0;j<n;j++){
    			cout<<arr[j]<<" ";
    		}
    		cout<<"\n";
    	}
     
    
    	return 0;
 }