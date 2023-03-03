#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector <int> v(n);
        for(int i=0; i<n; i++)
        {
            int element;
            cin>>element;
            v.push_back(element);
        }
        vector <int> v1;
        v1 = v;
        sort(v1.begin(),v1.end());

        for(int i=0; i<n; i++)
        {
            if(v[i]!=v1[1])
            {
                cout<<i+1<<"\n";
            }
        }
    }
    return 0;
}
/*void spy(){
    int n;
    cin>>n;
    vector <int> v(n);
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        v.push_back(element);
    }
    v1 = v;

    for(int i=0;i<n;i++){
        if(v[i]!=v1[1]){
            cout<<i+1<<"\n";
        }
    }
}*/
//--------------------------------------------------------------------//
/*
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
            cout<<m<<"\n";
        }
        else{
            cout<<j+1<<"\n";
        }
    }
    return 0;
}
*/



