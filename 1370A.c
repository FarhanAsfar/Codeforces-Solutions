#include<stdio.h>
int main()
{
    int n,i,x,k;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        k=x/2;
        printf("%d\n",k);
    }

    return 0;

}
