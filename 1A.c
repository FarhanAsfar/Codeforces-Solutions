#include<stdio.h>
int main()
{
    #ifndef a
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int n,m,a,x;
    scanf("%d%d%d",&n,&m,&a);
    x=(n/a)*(m/a);
    printf("%d\n",x);

    printf("sublime text worked!");

    return 0;
}
