#include <stdio.h>
void main()
{
	int a,b,c;
	scanf("%d\n%d\n%d",&a,&b,&c);
	if(a>b && a>c)
	{
		printf("first input is largest");
	}
	else if(b>c && b>a)
	{
		printf("second input is largest");
	}
	else{
		printf("last input is the largest of all");
	}
}
