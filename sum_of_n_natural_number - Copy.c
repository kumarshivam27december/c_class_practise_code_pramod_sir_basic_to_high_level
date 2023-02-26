#include <stdio.h>
void main()
{
	int input,i=1,sum=0;
	scanf("%d",&input);
	while(i<=input)
	{
//		printf("\n%d",i);
        sum=sum+i;
		i=i+1;
	}
	printf("%d",sum);
}
