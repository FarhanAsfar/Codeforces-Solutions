#include<stdio.h>
#include<string.h>
int main()
{
    char arr[100],temp;
    scanf("%s",arr);
    int i,j,l,count=0;
    l=strlen(arr);
    for(i=0;i<l;i++)
    {
        for(j=0;j<l;j++)
        {
            if(arr[j]<arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(i=0;i<l;i++)
    {
        if(arr[i]!=arr[i+1])
        {
            count++;
        }
    }
    if(count%2==0)
    {
        printf("CHAT WITH HER!\n");
    }
    else
    {
        printf("IGNORE HIM!\n");
    }
    return 0;
}

