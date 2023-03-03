#include<stdio.h>
int main()
{
float quiz,term1,term2,final,lab,cp,total;
printf("enter quiz number\n");
scanf("%f",&quiz);
while(quiz>10)
{
printf("error!enter quiz number between 0-10\n");
scanf("%f",&quiz);
}
printf("enter term1 number\n");
scanf("%f",&term1);
while(term1>20)
{
    printf("error!enter number between 0-20\n");
    scanf("%f",&term1);
}
printf("enter term2 number\n");
scanf("%f",&term2);
while(term2>20)
{
    printf("error!enter number between 0-20\n");
    scanf("%f",&term2);

}
printf("enter final number\n");
scanf("%f",&final);
while(final>25)
{
    printf("error! enter number between 0-25\n");
    scanf("%f",final);
}
printf("enter lab number\n");
scanf("%f",&lab);
while(lab>20)
{
    printf("error!enter number between 0-20\n");
    scanf("%f",&lab);
}
printf("enter class participation number\n ");
scanf("%f",&cp);
while(cp>5)
{
    printf("error!enter number between 0-5\n");
    scanf("%f",&cp);
}
total=quiz+term1+term2+final+lab+cp;
if(total>=90)
{
    printf("grade A");
}
else if(total>=80)
{
    printf("grade B");
}
else if(total>=70)
{
    printf("grade C");
}
else if(total>=60)
{
    printf("grade D");

}
else
{
    printf("grade F");
}
return 0;
}


