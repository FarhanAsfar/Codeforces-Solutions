#include<stdio.h>
int main()
{
    long long int n;
    int x,i,c=0;
    scanf("%lld",&n);

    for(;n;)
    {
        x=n%10;
        if(x==4 || x==7)
        {
            c++;
        }
        n=n/10;
    }
    printf("%d\n",c);

    if(c==4 || c==7)
        printf("YES");
    else
        printf("NO");

    return 0;
}
