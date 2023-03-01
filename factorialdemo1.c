/* 
  LOOP (Repetation)
  1. while
    
    while(exp)
    {
      statements; 
   }

*/

 
 #include<stdio.h>
 void main()
 { 	
    int a = 2; 
    int n; 
    unsigned long long int fact = 1; 
    printf("\n Enter a number = ");
 	scanf("%d",&n);
 	
 	if(n<0)
 	 printf("\nFactorial of NEGATIVE Number is not Defined");
 	else
 	{
	  	while(a<=n) //ext => test =>true / false
		{	  
		 fact =  fact*a;
		 a = a + 1;  
		}	
		 printf("\n Factorial of  %d = %d",n,fact);
 		
	 }
 	
	
	  /*
	   n = 4 (for Example)
	   
	   a   a<=4   fact   a =  a + 1
	   1	1	 	1	2
	   2	1	 	2	3
	   3	1	 	6	4
	   4	1	 	24	5
	   5	0
	   
	 */	
 	
 
 }
 
