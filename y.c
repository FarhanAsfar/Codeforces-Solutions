#include<stdio.h>
int main()
{
float x1,y1,x2,y2,radius;
printf("enter x1,y1,x2,y2:\n");
scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
radius= sqrt(pow((x2-x1),2)+pow((y2-y1),2));
printf("distance is:%f\n",radius);
return 0;
}
