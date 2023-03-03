#include<stdio.h>
int main()
{
    int i,j,n,sum=0,c=0;
    scanf("%d",&n);
    int ar[n][3];

    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&ar[i][j]);
            sum=sum+ar[i][j];
        }
         if(sum>=2)
        {
            c++;
        }
        sum=0;
    }
    printf("%d\n",c);

    return 0;
}
