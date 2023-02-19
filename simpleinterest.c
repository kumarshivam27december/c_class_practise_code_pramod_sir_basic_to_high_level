#include <stdio.h>
void main()
{
	float p,r;
	int t;
	printf("enter the value of p ");
	scanf("%f",&p);
	printf("\nenter the value of rate of interest ");
	scanf("%f",&r);
	printf("\nenter the value of time ");
	scanf("%d",&t);
	float simple_interest=("%f",(p*r*t)/100);
	printf("%f",simple_interest);
	
}
