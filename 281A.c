#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int i=0,l;
    scanf("%[^\n]",&s);

    l=strlen(s);

    for(i=0;i<l;i++)
    {
        if(s[0]>=97 && s[0]<=127)
        {
            s[0]=s[0]-32;
        }
    }

    printf("%s",s);

    return 0;
}
