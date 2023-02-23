#include <stdio.h>
void main()
{
	int a=5,b=10,c;
	scanf("%d",&c);
	switch(c){
		case 1:
			printf("\n%d",a+b);
			break;
		case 2:
			printf("\n%d",a-b);
			break;
		case 3:
			printf("\n%d",a*b);
			break;
		case 4:
			printf("\n%d",a/b);
			break;
		case 5:
			printf("\n%d",a%b);
			break;
		default:
			printf("invalid input");
	}
}
