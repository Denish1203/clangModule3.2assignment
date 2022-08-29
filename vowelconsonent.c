#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
printf("enter any alphabet : ");
scanf("%c",&ch);
switch(ch)
{
   case 'a':
   case 'A':
   printf("vowel");
   break;
   case 'e':
   case 'E':
   printf("vowel");
   break;
   case 'i':
   case 'I':
   printf("vowel");
   break;
   case 'o':
   case'O':
   printf("vowel");
   break;
   case 'u':
   case 'U':
   printf("vowel");
   break;
   default :
   printf("consonant");
   break;

}
}