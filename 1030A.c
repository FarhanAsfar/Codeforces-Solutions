#include<stdio.h>
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    int ar[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);

        if(ar[i]== 1)
        {
            c++;
            break;
        }
    }
    if(c==1)
        printf("HARD");
    else
        printf("EASY");

        return 0;

}
