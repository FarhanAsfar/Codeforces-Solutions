#include<stdio.h>
int main()
{
    int n,i,k,count=0;
    scanf("%d",&n);
    scanf("%d",&k);
    int ar[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }

    for(i=0;i<n;i++)
    {
        if(ar[i]>0 && ar[i]>=ar[k-1])
        {
            count++;
        }
    }
    printf("%d",count);

    return 0;
}
