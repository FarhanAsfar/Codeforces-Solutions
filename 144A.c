#include<stdio.h>
int main()
{
    int n,i,max,min,x,y;
    scanf("%d",&n);
    int ar[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    max=ar[0];
    //min=ar[0];

    for(i=0;i<n;i++)
    {
        if(max<ar[i])
        {
            max=ar[i];
            x=i;
        }
        if(min>ar[i])
        {
            min=ar[i];
            y=i;
        }
    }
    printf("%d\n%\n",)
    printf("%d\n%d\n",min,y);





}
