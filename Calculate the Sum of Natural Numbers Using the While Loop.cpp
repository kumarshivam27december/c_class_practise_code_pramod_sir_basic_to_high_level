#include <stdio.h>
int main()
{
	int input,i=1,sum=0;
	printf("enter the user input ");
	scanf("%d",&input);
	while(i<=input)
	{
		sum=sum+i;
		i++;
	}
	printf("The sum of the natural number = %d",sum);
	
	return 0;
}
