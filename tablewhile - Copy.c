#include <stdio.h>
void table();
void main()
{
	int num,i=1;
//	printf("print the value of number whose table is to be printed ");
//	scanf("%d",&num);
	table(num);
	}

void table(int x)
{
int num,i=1;
	printf("print the value of number whose table is to be printed ");
	scanf("%d",&num);
	while(i<=10){
		printf("\n%d X %d = %d",num,i,num*i);
		i=i+1;
		}	
}
