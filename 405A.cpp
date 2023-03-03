#include <iostream>
using namespace std;
// Gravity Flip (405-A)

int main()
{
    int n,temp,i,j;
    cin>>n;
    int arr[n];

    for(i=0; i<n; i++){
        cin>>arr[i];

    }
    for(i=0; i<n; i++){

        for(j=0; j<n-1; j++){

            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
