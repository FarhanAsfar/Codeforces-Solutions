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
    int even[2000], odd[2000];

    while(t--){
        cin>>n;
        int arr[n];
        int e=0, o=0;

        for(int i=0;i<n;i++){
            arr[i] = i;
            if(arr[i] % 2 == 0){
                even[e++] = arr[i];
            }
            else{
                odd[o++] = arr[i];
            }
        }
        for(int i=0;i<e;i++){
            cout<<even[i]<<" ";
        }
        for(int i=0;i<o;i++){
            cout<<odd[i]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}

