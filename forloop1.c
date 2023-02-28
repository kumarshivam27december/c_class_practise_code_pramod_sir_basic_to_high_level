#include <stdio.h>
void main()
{
	int n,i;
	printf("ENTER THE TABLE WHICH NEEDED TO BE CREATED : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	 printf("\n %d X %d = %d",n,i,n*i);	
	}
}
