#include <stdio.h>
void main()
{
	int input,i,j;
	printf("ENTER THE NO OF ROWS YOU WANTED TO PRINT : ");
	scanf("%d",&input);
	for(i=1;i<=input;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
}
