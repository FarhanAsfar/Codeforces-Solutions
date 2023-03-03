#include <iostream>
using namespace std;
// Sereja and Dima (381-A)

int main()
{
    int n,i, turn=0;
    int sereja=0, dima=0;
    cin>> n;
    int arr[n];
    int taken=n;
    int left=0, right=n-1;

    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    while(taken != 0){
        if(turn%2==0){   //turn%2 because sereja will always pick the even index.
            if(arr[left]>arr[right]){
                sereja += arr[left];
                left++;
            }
            else{
                sereja += arr[right];
                right--;
            }
        }
        else if(arr[left]>arr[right]){
            dima += arr[left];
            left++;
        }
        else{
            dima += arr[right];
            right--;
        }
        taken--;
        turn++;
    }
    cout<<sereja<<" "<<dima;

    return 0;
}
