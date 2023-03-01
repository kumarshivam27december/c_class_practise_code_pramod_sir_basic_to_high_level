/*
 Function:
 1) Function Declaration 
 return_type function_name(Input_list);
    
 2) Function Defination 
 return_type function_name(Input_list)
 {
 
 }
    
 3) Function Call 
 
  function_name(value1,value2,...);
 
 
 return_type = data_type
 If we don't want to return any data than we can use 
 void. 
 
 function_name: Identifier (follow Identifier rules)
 
 Input_list = list of data on which we want to perform operation or 
                  we want to generate result
 
 Note: 
       1 )Input list can be empty or we can mention it as void. 
       2) If we forget to write return_type of a function than by default
          it will be int. 
       3) Function may or may not return a value. 
       4) Function will return only single value. 
 
 Actual Argument:
    Value which we pass for computation is called actual argumen. 
 
 Formal Argument:
    Argument of function is called formal argument. 
 
*/
#include<stdio.h>
#define show printf 
// Funciton Declaration
 void arithmatic(int,int);

 void main()
{
 int x,y; // Define variables
 //Take input from the user
 printf("Enter first number=");
 scanf("%d",&x);//
 printf("Enter second number=");
 scanf("%d",&y);//
 
 // Function call 
 arithmatic(x,y); // Here x and y are actual parameter
 
}
// Function Defination 

 // Printing the result of arithmatic operations  
 void arithmatic(int a,int b) // Formal Parameter 
 { 
   // Body of function 
   printf("\n Addition = %d",a+b);//	
   printf("\n Subtraction = %d",a-b);//
   printf("\n Multiplication = %d",a*b);//
   printf("\n Division = %d",a/b);//
   printf("\n Remainder = %d",a%b);//
 }



