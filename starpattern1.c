#include <stdio.h>
void main()
{
	int input,row,column;
	printf("Enter the user input ");
	scanf("%d",&input);
	for(row=1;row<=input;++row)
	{
		for(column=1;column<=row;++column)
		{
			printf("*");
		}
		        printf("\n");

	}
}
