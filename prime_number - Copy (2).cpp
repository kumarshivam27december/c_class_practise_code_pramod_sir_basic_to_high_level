#include <stdio.h>
int main()
{
	int input,i,flag=0;
	printf("Enter a positive number = ");
	scanf("%d",&input);
	if(input==0||input==1){
		flag=1;
			}

	for(i=2;i<=input/2;++i)
	{
		if(input%i==0){
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("\nprime number");
	}else{
		printf("\nNot a prime number");
	}
	
return 0;	
}
