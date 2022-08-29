#include<stdio.h>
#include<conio.h>
void main()
{
    int n,mul,i;
    printf("enter number multipilcation num :");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        printf("%d * %d = %d\n",n,i,mul=n*i);
    }
}