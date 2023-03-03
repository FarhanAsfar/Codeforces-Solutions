#include<stdio.h>
int main()
{
    int x,n,i;
    scanf("%d %d",&x,&n);

    for(i=0;i<n;i++)
    {
        if(x%10 != 0)
        {
            x=x-1;
        }
        else
        {
            x=x/10;
        }
    }
    printf("%d\n",x);


    return 0;
}
