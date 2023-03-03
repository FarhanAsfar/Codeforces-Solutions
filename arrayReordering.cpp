#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,x;
    cin>>a>>b;
    if(b==0) x = a;
        a%=b;
   x = _gcd(b,a);
}
