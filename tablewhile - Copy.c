#include <stdio.h>
void main()
{
	int num,i=1;
	printf("print the value of number whose table is to be printed ");
	scanf("%d",&num);
	while(i<=10){
		printf("\n%d X %d = %d",num,i,num*i);
		i=i+1;
	}
}
