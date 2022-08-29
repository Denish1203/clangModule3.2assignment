#include<stdio.h>
#include<conio.h>
void main()
{
    int num,r,i,rev=0;
    printf("enter a number to print in reverse:");
    scanf("%d",&num);
    while(num>0)
    {
        r = num%10;
        rev=rev*10+r;
        num=num/10;
    }
    printf("%d",rev);
}