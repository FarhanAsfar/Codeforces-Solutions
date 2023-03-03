#include<stdio.h>
#include<string.h>
int main()
{
    char s[100],t[100];
    int k;
    //scanf("%[^\n]",&s);
    //scanf("%[^\n]",&t);
    gets(s);
    gets(t);

    k=strcmp(strrev(s),t);

    if(k==0)
        printf("yes");
    else
        printf("no");

    return 0;
}
