#include<stdio.h>
 void main()
 {
 	int n1,n2,choice; 
 	printf("\n Enter first number = ");
 	scanf("%d",&n1);
 	printf("\n Enter second number = ");
 	scanf("%d",&n2);
 	
 	 
	do
	{
	printf("\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Remainder\n6. Exit");
 	printf("\n Enter your choice(1-6) = ");
 	scanf("%d",&choice);
		switch(choice)  // expr => int or char
	  {
	    case 1:       // int or char constant 
	     printf("\nAddition = %d",n1+n2);
	     break;
	    case 2:        
	     printf("\nSubtraction = %d",n1-n2);
	     break;
	    case 3:        
	     printf("\nMultiplication = %d",n1*n2);
	     break;
	    case 4:        
	     printf("\nDivision = %d",n1/n2);
	     break;
	    case 5:        
	     printf("\nRemainder = %d",n1%n2);
	     break;
	    default:
	    	printf("\Thanks for exiting bye and f*** you");    
	  } 
	} while(choice!=6);
	
 }
