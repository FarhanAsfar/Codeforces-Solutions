#include<stdio.h>
int main()
{
float x,y;
printf("enter x,y:\n");
scanf("%f%f",&x,&y);
if(x>0&&y>0)
printf("region1");
else if(x<0&&y>0)
printf("region2");
else if(x>0&&y<0)
printf("region3");
else if(x<0&&y<0)
printf("region4");
return 0;
}
