#include<stdio.h>
#include<conio.h>
void main()
{
    int sum=0,num,r;
    printf("enter a number to sum their digits : ");
    scanf("%d",&num);
    while(num>0)
    {
        r=num%10;
        sum=sum+r;
        num=num/10;
    }
    printf("sum of digits is %d",sum);
}