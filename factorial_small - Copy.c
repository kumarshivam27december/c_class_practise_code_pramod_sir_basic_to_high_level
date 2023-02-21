#include <stdio.h>
void main()
{
	int i;
	int num;
	int f=1;
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		f=f*i;
	}
	printf("%d",f);
}
