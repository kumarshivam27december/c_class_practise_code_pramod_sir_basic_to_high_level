#include <stdio.h>
void main()
{
	int a;
	printf("enter percentage = ");
	scanf("%d",&a);
	
	if(a>=60 && a<=100){
		printf("First");
	}
	else if(a>=45 && a<60){
		printf("Second");
	}else if(a>=33 && a<45)
	{
		printf("Third");
	}else if(a>100 && a<0){
		printf("invalid");
	}
	else
	{
		printf("You are  Fail");
	}
	// in this code negative or more than 100 must not be failed
}
