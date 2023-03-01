/*
  Loops:
        1. Finite Loop 
        2. Infinite Loop 
        3. Nonfinite Loop 
        
    a. while 
    
  while(exp)  exp => test => true/false 
  {
   statement(s); 
  }
    b. for 
    1.
    for(; ;)
    {
    
     statements; 
    }
     
    for(exp1; exp2; exp3)
    {
    
     statements; 
    }
    
    3. do... while 
 
*/
/*
  
*/
#include<stdio.h>

void main()
{	
  int i,n; 
  
  printf("\nEnter a number = ");
  scanf("%d",&n);
  
  if (n < 0)
   printf("\n Factorial of negative number is not defined.");
  else
  {
  	int fact = 1;     
	  for(i = 2; i<=n;i++ ) //4
	  {
	  	fact = fact *i; 		  	 
	  }
	  printf("\n Factorial of %d = %d",n,fact);
  }	
}
