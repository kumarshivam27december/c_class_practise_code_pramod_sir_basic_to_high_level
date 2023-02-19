#include <stdio.h>
void main()
{
	int a;
	printf("ENTER YOUR AGE ");
	scanf("%d",&a);
	if(a<=0){
		printf("\nPLEASE ENTER A VALID AGE");
	}else if(a<18)
	{
		printf("\nYOU ARE NOT ELLIGIBLE FOR VOTING");
	}else{
		printf("\nYOU ARE ELLIGIBLE FOR VOTING");
	}
}
