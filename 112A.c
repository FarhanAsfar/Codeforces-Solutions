#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[100];
    int i,k;
    gets(s1);
    gets(s2);
    strlwr(s1);
    strlwr(s2);

    k=strcmp(s1,s2);

    if(k==0)
        printf("%d",k);

    else
    {
        for(i=0;s1[i]!='\0' && s2[i]!='\0';i++)
        {
            if(s1[i]<s2[i])
            {
                printf("-1");
                break;
            }
            else if(s1[i]>s2[i])
            {
                printf("1");
                break;
            }
        }
    }

    return 0;

}
