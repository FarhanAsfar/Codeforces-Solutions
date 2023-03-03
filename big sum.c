#include<stdio.h>
int main()
{
    long int ar[10];
    int i,n,sum=0;

    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%ld",&ar[i]);
        sum=sum+ar[i];
    }
    printf("%d",sum);

    return 0;
}

