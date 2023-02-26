#include <stdio.h>
void main()
{
	int num,i=1,sum=0;
	printf("ENTER USER INPUT ");
	scanf("%d",&num);
	while(i<=num)
	{
		    if(i%2==0)
		    {
			
			sum=sum+i;	
           }
			i=i+1;

	      }
	            printf("%d",sum);

}
