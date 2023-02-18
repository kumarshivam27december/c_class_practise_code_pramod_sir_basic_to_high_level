#include  <stdio.h>
void main()
{
	int a;
	printf("enter the number");
	scanf("%d",&a);
	
	if(a>=0)
	{
		printf("positive");
		if(a%2==0)
		{
			printf("\neven number");
		}
		else
		{
		    printf("\nodd  number");	
		}
	}//end of outer if
	else
	   {
		printf("negative number");
		if(a%2==0)
		{
		printf("\neven number");
		}
		else
		{
		    printf("\nodd  number");	
		}
		
	}
}
