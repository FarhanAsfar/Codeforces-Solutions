#include<stdio.h>
int main()
{
int year;
printf("enter year:");
scanf("%d",&year);
if(year%4==0&&year%100==0&&year%400==0)
{
printf("leap year");
}
else if(year%4==0&&year%100!=0)
{
printf("leap year");

}
else
{
  printf("not leap year");
}
return 0;
}
