#include <stdio.h>
int main()
{
	int input,remainder;
	printf("ENTER THE INPUT PLEASE ");
	scanf("%d",&input);
	while(input!=0)
	{
		remainder=input%10;
		printf("%d",remainder);
		input=input/10;
	}
	return 0;
}
