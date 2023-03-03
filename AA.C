#include<stdio.h>
int main()
{
int c,n,FACT=1;
n=5;
for(c=1;c<=n;c++)
FACT=FACT*c;
printf("factorial of %d!=%d",n,FACT);
return 0;
}
