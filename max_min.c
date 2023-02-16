#include <stdio.h>
void main()
{
//take two value from user and find max and min
int a,b;
printf("enter the first number = ");
scanf("%d",&a);
printf("\nenter the second value = ");
scanf("%d",&b);
printf("\n max = %d ",a>b?a:b);
printf("\n min = %d ",a<b?a:b);


/*
scanf("%d\n%d",&a,&b);
printf("max = ");
a>b?printf("a"):printf("b");
printf("\nmin = ");
a<b	?printf("\na"):printf("\nb");
*/


/*
to find the maximum and minimum value this will consume more time and space hence
will not get good rating

int max = a>b?a:b;
int min = a<b?a:b;

printf("\nmax = %d"max);
printf("\nmin = %d"min);

*/







}
