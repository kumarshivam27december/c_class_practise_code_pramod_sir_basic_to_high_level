/*
 Table with function 
*/
// Function declration 
 void table(int a);
 #include<stdio.h>
 void main()
 { 	
    int n; 
    printf("\n Enter a number = ");
 	scanf("%d",&n);
	table(n);	// Function call 

 }
 
 void table(int a)
 {
 	int i; 
 	//Body of the function 
 	for(i = 1;i<=10;i++) //ext => test =>true / false
	{
	 printf("\n%d X %d = %d ",a,i,a*i); 	  
	} 
 	
 }
 
 
