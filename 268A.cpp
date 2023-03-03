#include <iostream>
using namespace std;
// Games (268-A)

int main()
{
    int n, count=0;
    cin>>n;
    int home[n];
    int away[n];

    for(int i=0;i<n;i++){
        cin>>home[i];
        cin>>away[i];
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(home[i]==away[j]){
                count++;
            }
        }
    }
    cout<< count;

    return 0;
}
