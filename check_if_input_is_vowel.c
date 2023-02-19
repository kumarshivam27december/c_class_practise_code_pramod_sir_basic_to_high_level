#include <stdio.h>
void main()
{
	char a;
	printf("ENTER TOUR FAVOURITE CHARACTER ");
	scanf("%c",&a);
	(a=='A'||a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='E'||a=='I'||a=='O'||a=='U')?printf("IT IS VOWEL"):printf("IT IS A CONSONENT");
}
