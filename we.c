#include<stdio.h>
int main()
{
float mm,cm,km;
printf("enter milimeter value:");
scanf("%f",&mm);
cm=mm/10;
km=mm/1000000;
printf("centimeter value is:%f\n",cm);
printf("kilometer value is:%f",km);
return 0;
}
