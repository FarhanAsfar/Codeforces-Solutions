#include<stdio.h>
int main()
{
    int n,i,j,sum=0,f=0;
    int ar[100][100];

    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&ar[i][j]);
        }

    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
        {
            sum=sum+ar[j][i];
        }

        printf("%d  ",sum);
        sum=0;
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
        {
            f=f+ar[i][j];
        }
    }
    printf("\n%d\n ",f);

    if(sum==0 && f==0)
        printf("YES");

    else
        printf("NO");


}

