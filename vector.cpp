#include <iostream>
#include <iostream>
#include <vector>
using namespace std;

/*int main()
{
    int n,element;
    cin>>n;
    vector <int> v;

    for(int i=0;i<n;i++){
        cin>>element;
        v.push_back(element);
    }
    vector<int> copy;
    copy = v; //copied vector 'v' into vector 'copy'
    for(int i=0;i<copy.size();i++){
        cout<<copy[i]<<" ";
    }
}*/

int main()
{
    int arr[101];
    int t;
    cin>>t;

    while(t--){
        int n,m=0,j;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==arr[1]){
                m++;
            }
            else{
                 j=i;
            }
        }
        if(m==1){
            cout<<m+1<<"\n";
        }
        else{
            cout<<j+1<<"\n";
        }
    }
    return 0;
}
