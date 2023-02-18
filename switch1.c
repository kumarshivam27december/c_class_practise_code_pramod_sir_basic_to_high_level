#include <stdio.h>
#include <stdlib.h>
// OR #INCLUDE <process.h>
void main()
{
	int a,b,your_choice;
	printf("\n enter the first number");
	scanf("%d",&a);
	printf("\n enter the second number");
	scanf("%d",&b);
	

	/*
	 ARTHEMATIC CALCULATOR
	 
	 
	 
	 
	1 ADDITION 
	2 SUBTRACTION
	3 MULTIPLICATION
	4 DIVISION
	5 MODULOUS OR REMAINDEER
	6 EXIT
	
	
	
	ENTER YOUR CHOICE FROM (1-5) = 
	*/
	printf("\t\tARITHMATIC CALCULATOR");
	printf("\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Remainder\n6.Exit");
	printf("\n\nEnter Your Choice(1-5) = ");
	scanf("%d",&your_choice);
	switch(your_choice)
	{
		case 1:
			printf("\nAddition = %d",a+b);
			break;
		case 2:
			printf("\nsubtraction = %d",a-b);
			break;
		case 3:
			printf("\nmultiplication = %d",a*b);
			break;
		case 4:
			printf("\ndivisor = %d",a/b);
			break;
		case 5:
			printf("\nremainder = %d",a%b);
			break;
		case 6:
			exit(1);
			break;
			
		default:
			printf("\n WRONG YOUR_CHOICE "); //DEFAULT CAN BE OPTIONAL
	}
	
	
	
	
	
	
	
	
}
