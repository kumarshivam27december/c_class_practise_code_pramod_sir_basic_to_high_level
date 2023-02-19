#include <stdio.h>
void main()
{
	int a;
	printf("ENTER YEAR ");
	scanf("%d",&a);
	if(a%4==0){
		printf("\nTHIS IS A LEAP YEAR");
	}else{
		printf("\nTHIS IS A NON LEAP YEAR");
	}
}
