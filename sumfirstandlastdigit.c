#include<stdio.h>
void main()
{
    int firstdigit,lastdigit,num,sum;
    printf("enter a number to find sum of first and last digit:");
    scanf("%d",&num);
    lastdigit=num%10;
    while(num>=10)
    {
        num=num/10;
    }
    firstdigit=num;
    printf("sum of first and last digit is %d",sum=firstdigit+lastdigit);
    
}