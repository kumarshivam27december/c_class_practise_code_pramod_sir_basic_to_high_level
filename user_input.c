#include <stdio.h>
void main()
{
	/*
	TAKE A INTEGER FROM USER
	*/
	
	int a;
	printf("Enter the user input = ");
	scanf("%d",&a);
    int square=a*a;
    int cube=a*a*a;
	printf("output 1\n");
	printf("value = %d\t",a);
	printf("square = %d\t",square);
	printf("cube = %d\t",cube);
	printf("\n");
	printf("\n");
	printf("output 2\n");
	printf("value  square  cube");
	printf("\n%d	%d	%d",a,square,cube);
// int a;
// scanf("%d",a);	
//	printf("the given integer is %d",a);
//if the input is = then output is 0
//if the input is shivam then output is 0
//if the input is 5.0 then the output is 5
// if the input is 10 digit number then output is wrong output different than other	
/*
	qn 1=>  output 1:
	              value =5 square =25  cube =125
	        output 2:
	        value square cube
	        5      25     125
*/
	
	
}
