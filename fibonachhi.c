#include <stdio.h>
void main()
{
int count, firstterm=0, secondterm=1, nextterm, i;
printf("Enter the number of terms : ");
scanf("%d",&count);

printf("First %d terms of fibonacci series ");
for(i=0;i<count;i++)
{
    if(i<=1)
    nextterm=i;
    else
    {
        nextterm = firstterm + secondterm;
        firstterm = secondterm;
        secondterm = nextterm;
    }
    printf("%d\n",nextterm);
    }
}
