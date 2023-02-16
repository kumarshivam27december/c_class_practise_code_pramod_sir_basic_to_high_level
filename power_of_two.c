#include <stdio.h>
void main()
{
//take a number from user check whether it is a power of 2
int a;
printf("Enter the number");
scanf("%d",&a);
((a&(a-1)))==0?printf("power of two "):printf("not a power of two");

}

