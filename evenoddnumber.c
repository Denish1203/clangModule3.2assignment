#include<stdio.h>
void main()
{
    int num;
    printf("enter number to check even or odd : ");
    scanf("%d",&num);
    (num%2==0)?printf("num is even"):printf("number is odd");
}