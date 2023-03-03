#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// Night at the Museum (731-A)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin>>str;
    int l=str.length();
    int rotation = 0;
    int start = 0;

    for(int i=0;i<l;i++){
        int indx = str[i]-'a';
        int d1= abs(start-indx);

        if(d1<13){
            rotation += d1;
        }
        else{
            rotation += 26-d1;
        }
        start=indx;
    }
    cout<<rotation;

    return 0;

}
