#include <iostream>
using namespace std;
//Stones on the Table (266-A)

int main()
{
    int n;
    cin>> n;
    char s[n];
    int c=0;
    for(int i=0; i<n; i++){
        cin>>s[i];
    }
    for(int i=0; i<n; i++){
        if(s[i]==s[i+1]){
            c++;
        }
    }
    cout<<c;

    return 0;
}
