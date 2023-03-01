// Factorial with function 
#include<stdio.h>
//Function Declaration 
void factorial(int);
void main()
{	
  int n; 
  
  printf("\nEnter a number = ");
  scanf("%d",&n);
  
  if (n < 0)
   printf("\n Factorial of negative number is not defined.");
  else
  {
  	factorial(n); // Function Call 
  }	
}

//Function Defination
void factorial(int x)
{
	int fact = 1,i;     
	  for(i = 2; i<=x;i++ ) //4
	  {
	  	fact = fact *i; 		  	 
	  }
	  printf("\n Factorial of %d = %d",x,fact);
}
 
 
 
