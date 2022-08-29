#include <stdio.h>
void main()
{    
    int i,j,k=0;
    for(i=1;i<=11;i++)
    {
        i<=6?k++:k--;
        for(j=1;j<=6;j++)
        if(j<=k)
        {
            printf("* ");
        }
        else
        {
            printf(" ");
        }
        printf("\n");
    }

}