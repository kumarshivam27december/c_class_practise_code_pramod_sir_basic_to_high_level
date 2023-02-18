#include <stdio.h>
void main()
{
	int a;
	printf("enter the number\t");
	scanf("%d",&a);
	/*if(a>=0){
		printf("positive");
	}
	else{
		printf("negative number");
	}
	*/
	if(a%2==0)
		printf("positive");
		
	else
		printf("odd");
	 
}
