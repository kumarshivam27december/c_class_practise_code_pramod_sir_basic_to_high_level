#include <stdio.h>
int main()
{
	int input,count,t1=0,t2=1,temp=0;
	printf("enter the no of terms");
	scanf("%d",&input);
	printf("\nFibonacci series: %d, %d, ",t1,t2);
	count=2;
	while(count<input)
	{
		temp=t1+t2;
		t1=t2;
		t2=temp;
		++count;
		printf("%d, ",temp);
		
	}
	return 0;
}
