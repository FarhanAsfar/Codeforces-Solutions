#include <bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int n,t;
    cin>>t;
    string str;

    while(t--){
        cin>>n;
        vector<char> ini;
        for(int i=0;i<n;i++){
            cin>>str;
            char c = str[0];
            ini.push_back(c);
        }
        for(int i=0;i<n;i++){
            cout<<ini[i]<<" ";
        }
    }
    
    return 0;
}