#include <stdio.h>
int main()
{
	int input,remainder,sum=0,temp;
	printf("ENTER THE USER INPUT ");
	scanf("%d",&input);
	temp=input;
	while(input!=0)
	{
		remainder=input%10;
		sum=sum*10+remainder;
//        printf("%d",remainder);
		input=input/10;
	}
	(temp==sum)?printf("THE NUMBER IS A PALINDROME"):printf("THE NUMBER IS NOT A PALINDROME");
     return 0;
     
}
