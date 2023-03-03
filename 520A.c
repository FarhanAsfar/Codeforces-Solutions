#include<stdio.h>
int main()
{
    int i,n,x,check=1;
    scanf("%d\n",&n);
    char s[100],c;
    gets(s);
    int ar[26]={0};

    for(i=0;s[i]!='\0';i++)
    {
        c=tolower(s[i]);
        x=c-97;
        ar[x]=ar[x]+1;
    }

    for(i=0;i<26;i++)
    {
        if(ar[i]==0)
            check=-1;
    }
    if(check== 1)
        printf("YES");
    else
        printf("NO");

    return 0;
}
