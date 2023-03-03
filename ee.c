#include<stdio.h>
int main()
{
float x,res;
printf("enter x:");
scanf("%f",&x);
res=6*pow(x,5)-3*x*x-5*sin(x);
printf("result:%.3f\n",res);
return 0;

}
