#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x;

    cin>>n;
    int odd=0;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x%2==1){
            odd++;
        }
        else{
            continue;
        }
    }
    double d = (odd/n)*(100.0);
    cout<<"Total odd numbers: "<<odd<<"\n";
    cout<<x<<" percent of zpmbies";

    return 0;
}
