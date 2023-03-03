#include<stdio.h>
int main()
{
    char s[100];
    int i=0,upper=0,lower=0,c;

    gets(s);

    while(s[i]!='\0')
    {
        c=s[i];

        if(c>=65 && c<=90)
            upper++;

        else if(c>=97 && c<=122)
            lower++;

            i++;
    }
    printf("cpital letters: %d\nsmall letters: %d\n",upper,lower);

    if(upper>lower)
    {
        strupr(s);
    }
    else if(lower>=upper)
    {
        strlwr(s);
    }
    printf("%s",s);


}
