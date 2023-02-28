#include<stdio.h>  
int main()    
{    
int input,remainder,sum=0,store;    
printf("enter the number=");    
scanf("%d",&input);    
store=input;    
while(input!=0)    
{    
remainder=input%10;    
sum=(sum*10)+remainder; 
//printf("%d",remainder);   
input=input/10;   // it is just like we used i++ or i=i+1 
}    
if(store==sum)    
printf("palindrome number ");    
else    
printf("not palindrome");   
return 0;  
}   
/*
3456           345            34             3
3456%10=6       5              4              3%10=3
6               6=6x10+5=65    65x10+4=654    654x10+3=6543
3456/10=345     345/10=34      34/10=3        3/10=0               
now the loop is closed
*/
