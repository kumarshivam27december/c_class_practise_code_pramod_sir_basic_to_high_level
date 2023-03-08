#include <stdio.h>
int main()
{
	
	int input,i;
	printf("ENTER THE USER INPUT WHOSE TABLE IS NEED TO BE PRINTED = ");
	scanf("%d",&input);
	for(i=1;i<=input+1;i++)
	{
		printf("\n%d X %d = %d",input,i,input*i);
	}
	return 0;
}
