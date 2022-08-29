#include<stdio.h>
#include<conio.h>
void main()
{
    int num,r,max=0;
    printf("enter a number to check largest digit :" );
    scanf("%d",&num);
    while(num!=0)
    {
        r=num%10;
        if(r>max)
        max=r;
        num=num/10;
    }
    printf("\nlargest digit = %d",max);
}