#include <stdio.h>
void main()
{
	int date,year,month;
	printf("enter date");
	scanf("%d",&date);
	printf("\nenter month");
	scanf("%d",&month);
	printf("\nenter year");
	scanf("%d",&year);
	((date>=0)&&(date<=31))&&((month>=0)&&(month<=12))&&((year>=0)&&(year<=10000))?printf("\nthis is valid"):printf("\nTHIS IS INVALID");
}
