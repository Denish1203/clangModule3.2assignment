#include<stdio.h>
void main()
{
    int num[10],i,count=0,count1=0,odd=0,even=0;
       for(i=1;i<=10;i++)
    {
        printf("Input 10 numbers element %d : ", i );
        scanf("%d",&num[i]);
        if(num[i]%2==0)
        {
        even=even+num[i];
        count++;
        }
        else
        {
        odd=odd+num[i];
        count1++;
        }
    }
    printf("there are %d even numbers",count );
    printf("\nthere are %d odd numbers",count1);
    printf("\nsum of even numbers is %d",even);
    printf("\nsum of odd numbers is %d",odd);

}