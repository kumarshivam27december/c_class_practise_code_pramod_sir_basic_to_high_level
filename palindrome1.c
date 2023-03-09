#include <stdio.h>
void main()
{
	
int num,last_digit,last;

printf("ENTER THE USER INPUT : ");
scanf("%d",&num);
int t=num;
while(num!=0)
{
	last_digit=num%10;
	printf("%d",last_digit);
    num=num/10;
    
    
	
	
}
//t=last_digit;
/*if(num==t){
	printf("palindrome");
}else{
	printf("nil");
}
*/

//   
//if(num==last_digit)
//{
//	printf("palindrome");
//}
//else
//{
//	printf("not a palindrome");
//}
if(t==last_digit){
	printf("p");
}

}

