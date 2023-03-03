#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    getline(cin, s);
    int count=0;

    sort(s.begin(), s.end());

    for(int i=0;i<s.length()-1;i++){
        if(s[i]==' ' || s[i]==',' || s[i]=='{}'){
            continue;
        }
        else if(s[i]!=s[i+1]){
            count++;
        }
    }
    cout<<count-1;

    return 0;

}



