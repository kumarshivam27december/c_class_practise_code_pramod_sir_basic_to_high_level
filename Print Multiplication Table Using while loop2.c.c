#include <stdio.h>
int main()
{
	int input,i=1;
	printf("ENTER USER INPUT = ");
	scanf("%d",&input);
	while(i<=10)
	{
		printf("\n%d X %d = %d",input,i,input*i);
		i++;
		
	}
	return 0;
}
