#include <stdio.h>
void main()
{   
	float math,science,hindi,english,cse;
	printf("ENTER MATH MARKS ");
	scanf("%f",&math);
	printf("\nENTER SCIENCE MARKS ");
	scanf("%f",&science);
	printf("\nENTER HINDI MARKS ");
	scanf("%f",&hindi);
	printf("\nENTER ENGLISH MARKS ");
	scanf("%f",&english);
	printf("\nENTER COMPUTER SCIENCE AND ENGINEERING MARKS ");
	scanf("%f",&cse);
	float total=("%f",cse+math+hindi+english+science);
	float average=("%f",total/5);
	printf("\nTOTAL PERCENTAGE = %.2f ",average);
}
