#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,temp;

    char s[100];
    scanf("%s",&s);
    n=strlen(s);

    for(i=0;i<n;i+=2)
    {
        for(j=0;j<n-2;j+=2)
        {
            if(s[j]>s[j+2])
            {
                temp=s[j];
                s[j]=s[j+2];
                s[j+2]=temp;
            }
        }
    }
    printf("%s",s);

    return 0;


}
