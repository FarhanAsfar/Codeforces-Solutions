#include<stdio.h>
#include<string.h>

int main()
{
    int n,i,X=0;
    char s1[]="X++",s2[]="++X",s3[]="X--",s4[]="--X";
    scanf("%d",&n);
    char s[100];

    for(i=0;i<n;i++)
    {
        scanf("%s",&s);
        if(strcmp(s1,s)==0)
        {
            X++;
        }
        else if(strcmp(s2,s)==0)
        {
            ++X;
        }
        else if(strcmp(s3,s)==0)
        {
            X--;
        }
        else if(strcmp(s4,s)==0)
        {
            --X;
        }
    }
    printf("%d",X);

    return 0;
}
